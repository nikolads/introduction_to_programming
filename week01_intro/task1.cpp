/**
  * Example solution to task 1.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b) {
        if (a < c) {            // a < b and a < c
            cout << a << "\n";
        }
        else {                  // c < a < b
            cout << c << "\n";
        }
    }
    else {                      // a >= b
        if (b < c) {            // b <= a and b < c
            cout << b << "\n";
        }
        else {                  // c < b <= a
            cout << c << "\n";
        }
    }

    return 0;
}
