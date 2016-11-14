/**
  * Example solution to task 5.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int ARR_SIZE = 7;
    int arr[ARR_SIZE];

    for (int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < ARR_SIZE; i++) {
        sum += arr[i];
    }

    int digits = 0;
    for (int n = sum; n != 0; n /= 10) {
        digits++;
    }

    cout << digits << "\n";

    return 0;
}
