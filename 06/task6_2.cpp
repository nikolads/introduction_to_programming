/**
  * Example solution to task 6.2.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int MAX_SIZE = 100;

    // Въвежда се масив с не повече от MAX_SIZE елемента.
    // Заделяме място за MAX_SIZE + 1 елемента, за да сме сигурни, че ще има
    // място да добавим новия елемент към масива.
    int arr[MAX_SIZE + 1];
    int arrSize;

    cin >> arrSize;
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    int insIndex, insElem;
    cin >> insIndex >> insElem;

    for (int i = arrSize; i > insIndex; i--) {
        arr[i+1] = arr[i];
    }
    arr[insIndex+1] = insElem;
    arrSize++;

    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
