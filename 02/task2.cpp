/**
  * Example solution to task 2.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;

    int lhdNum, rhdNum;

    switch (a) {
        case '0': lhdNum = 0; break;
        case '1': lhdNum = 1; break;
        case '2': lhdNum = 2; break;
        case '3': lhdNum = 3; break;
        case '4': lhdNum = 4; break;
        case '5': lhdNum = 5; break;
        case '6': lhdNum = 6; break;
        case '7': lhdNum = 7; break;
        case '8': lhdNum = 8; break;
        case '9': lhdNum = 9; break;
    }

    switch (c) {
        case '0': rhdNum = 0; break;
        case '1': rhdNum = 1; break;
        case '2': rhdNum = 2; break;
        case '3': rhdNum = 3; break;
        case '4': rhdNum = 4; break;
        case '5': rhdNum = 5; break;
        case '6': rhdNum = 6; break;
        case '7': rhdNum = 7; break;
        case '8': rhdNum = 8; break;
        case '9': rhdNum = 9; break;
    }

    switch (b) {
        case '+':
            cout << (lhdNum + rhdNum) << '\n';
            break;
        case '-':
            cout << (lhdNum - rhdNum) << '\n';
            break;
        case '*':
            cout << (lhdNum * rhdNum) << '\n';
            break;
        case '/':
            cout << (lhdNum / rhdNum) << '\n';
            break;
        case '%':
            cout << (lhdNum % rhdNum) << '\n';
            break;
    }

    return 0;
}
