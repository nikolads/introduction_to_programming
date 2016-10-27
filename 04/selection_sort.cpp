/**
  * Example implementation of the selection sort algorithm.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

const int MAX_LEN = 100;

int main() {
    int arr[MAX_LEN];
    int n;

    // Въвеждаме масив
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Сортираме масива по метода на пряката селекция
    for (int pos = 0; pos < n; pos++) {
        int indexMin = pos;
        for (int i = pos + 1; i < n; i++) {
            if (arr[i] < arr[indexMin]) {
                indexMin = i;
            }
        }
        swap(arr[pos], arr[indexMin]);
    }

    // Извеждаме сортирания масив
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
