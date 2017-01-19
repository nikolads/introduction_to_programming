/**
  * Example implementation of the selection sort algorithm.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    // Въвеждаме масив
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Сортираме масива по метода на пряката селекция
    for (int pos = 0; pos < n - 1; pos++) {
        int indexMin = pos;
        for (int i = pos + 1; i < n; i++) {
            if (arr[i] < arr[indexMin]) {
                indexMin = i;
            }
        }

        // Разменяме стойностите на arr[pos] и arr[indexMin]
        int temp = arr[pos];
        arr[pos] = arr[indexMin];
        arr[indexMin] = temp;
    }

    // Извеждаме сортирания масив
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
