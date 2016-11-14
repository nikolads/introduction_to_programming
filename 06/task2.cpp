/**
  * Example solution to task 2.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int digit1 = number % 10;
    int digit2 = number / 10 % 10;
    int digit3 = number / 100 % 10;
    int digit4 = number / 1000 % 10;

    int first = digit4 * 10 + digit1;
    int second = digit3 * 10 + digit2;

    if (first < second) {
        cout << "less\n";
    }
    else if (first > second) {
        cout << "greater\n";
    }
    else {
        cout << "equal\n";
    }

    return 0;
}
