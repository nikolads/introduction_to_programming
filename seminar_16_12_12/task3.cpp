/**
  * Визуализация на пъзела "Ханойски кули"
  *
  * Пъзелът се състои от 3 на брой стълба.
  * Върху първия стълб са наредени N на брой различни диска, подредени по големина, като най-големият
  * е най-отдолу, а най-малкият - най-отгоре.
  * Целта на пъзела е всички дискове да бъдат преместени върху последния стълб.
  * Може да се мести само един диск на ход, като може да се вземе само най-горния диск от всеки стълб
  * и по-голям диск не може да се поставя върху по-малък.
  */

#include <iostream>

const int N_POLES = 3;
const int MAX_N = 100;

/// Премества най-горния диск от стълб `src` върху стълб `dst`.
void moveDisk(int src, int dst, int poles[][MAX_N], int* poleLens);

/// Премества кулата от дискове 1, 2, 3 ... `disk` от стълб `src` върху стълб `dst`,
/// използвайки стълб `spare` за междинен при преместванията.
void moveTower(int disk, int src, int dst, int spare, int poles[][MAX_N], int* poleLens);

void printPoles(int poles[][MAX_N], int* poleLens);

int main() {
    // Общ брой дискове.
    int nDisks;
    // За всеки стълб държим масив от дисковете върху него.
    // Дисковете се представят като числа, като по-голямо число значи по-голям диск.
    int poles [N_POLES][MAX_N] = {};

    std::cin >> nDisks;
    for (int i = nDisks; i >= 1; i--) {
        poles[0][nDisks - i] = i;
    }

    // Броя дискове върху всеки стълб.
    // `poleLens[i]` е броят елементи в `poles[i]`.
    int poleLens[N_POLES] = {nDisks, 0, 0};

    std::cout << "Initial state\n";
    printPoles(poles, poleLens);
    std::cout << "\n";

    moveTower(nDisks, 0, 2, 1, poles, poleLens);
}

void moveDisk(int src, int dst, int poles[][MAX_N], int* poleLens) {
    int srcLen = poleLens[src];
    int dstLen = poleLens[dst];

    std::cout << "Moving disk " << poles[src][srcLen - 1] << " from pole " << src << " to pole " << dst << "\n";
    poles[dst][dstLen] = poles[src][srcLen - 1];

    poleLens[src]--;
    poleLens[dst]++;

    printPoles(poles, poleLens);
    std::cout << "\n";
}

void moveTower(int disk, int src, int dst, int spare, int poles[][MAX_N], int* poleLens) {
    if (disk == 1) {
        moveDisk(src, dst, poles, poleLens);
    }
    else {
        moveTower(disk - 1, src, spare, dst, poles, poleLens);
        moveDisk(src, dst, poles, poleLens);
        moveTower(disk - 1, spare, dst, src, poles, poleLens);
    }
}

void printPoles(int poles[][MAX_N], int* poleLens) {
    for (int pole = 0; pole < N_POLES; pole++) {
        std::cout << "- ";      // Да се виждат по-лесно стълбовете

        for (int i = 0; i < poleLens[pole]; i++) {
            std::cout << poles[pole][i];
        }
        std::cout << "\n";
    }
}
