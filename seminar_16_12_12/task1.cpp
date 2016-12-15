/**
  * Въвежда се квадратна матрица от символи и дума.
  * Да се провери дали думата се съдържа в матрицата като поредица от съседни (т.е. имащи обща страна),
  * неповтарящи се клетки.
  *
  * Пример:
  * Матрица от символи:
  * a b c
  * d e f
  * g h i
  *
  * Думи, които търсим:
  * dehi - да
  * xyz - не
  * defe - не
  */

#include <iostream>

const int MAX_N = 100;

/// Проверява дали думата `word` може да се намери в `symbols`,
/// започвайки от клетка (`row`, `col`).
bool solve(const char* word, int row, int col);

int n;
char symbols[MAX_N][MAX_N];
bool used[MAX_N][MAX_N] = {};

int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> symbols[i][j];
        }
    }

    char word[MAX_N * MAX_N];
    std::cin >> word;

    bool found = false;

    for (int row = 0; row < n && !found; row++) {
        for (int col = 0; col < n && !found; col++) {
            found = solve(word, row, col);
        }
    }

    std::cout << found << "\n";
}

bool solve(const char* word, int row, int col) {
    if (word[0] == '\0') {
        return true;
    }

    if (symbols[row][col] != word[0]) {
        return false;
    }

    used[row][col] = true;
    bool found = false;

    if (row < n - 1 && !found && !used[row + 1][col]) {
        found = solve(word + 1, row + 1, col);
    }

    if (row > 0 && !found && !used[row - 1][col]) {
        found = solve(word + 1, row - 1, col);
    }

    if (col < n - 1 && !found && !used[row][col + 1]) {
        found = solve(word + 1, row, col + 1);
    }

    if (col > 0 && !found && !used[row][col - 1]) {
        found = solve(word + 1, row, col - 1);
    }

    used[row][col] = false;
    return found;
}
