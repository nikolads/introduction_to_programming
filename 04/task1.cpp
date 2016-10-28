/**
  * Example solution to task 1.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int pos = 0; pos < n - 1; pos++) {
        // Единствената разлика при сортиране в обратна посока е,
        // че този път търсим най-големия елемент вместо най-малкия.
        int indexMax = pos;
        for (int i = pos + 1; i < n; i++) {
            if (arr[i] > arr[indexMax]) {
                indexMax = i;
            }
        }

        int temp = arr[pos];
        arr[pos] = arr[indexMax];
        arr[indexMax] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
