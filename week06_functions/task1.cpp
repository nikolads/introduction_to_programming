/**
  * Example solution to task 1.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = 0;
    c |= a << 8;
    c |= b;

    int maskA = 0xff00;         // 0000 0000 0000 0000 1111 1111 0000 0000
    int maskB = 0xff;           // 0000 0000 0000 0000 0000 0000 1111 1111

    int recoveredA = (c & maskA) >> 8;
    int recoveredB = c & maskB;

    cout << recoveredA << " " << recoveredB << "\n";

    return 0;
}
