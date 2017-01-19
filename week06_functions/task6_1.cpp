/**
  * Example solution to task 6.1.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int MAX_SIZE = 100;

    int arr[MAX_SIZE];
    int arrSize;

    cin >> arrSize;
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    int delIndex;
    cin >> delIndex;

    for (int i = delIndex; i < arrSize-1; i++) {
        arr[i] = arr[i+1];
    }
    arrSize--;

    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
