/**
  * Example solution to task 2.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Point is (0, 0)\n";
    }
    else if (x != 0 && y == 0) {
        cout << "Point lies on the Ox axis\n"
    }
    else if (x == 0 && y != 0) {
        cout << "Point lies on the Oy axis\n";
    }
    else if (x > 0 && y > 0) {
        cout << "Point lies in first quadrant\n";
    }
    else if (x < 0 && y > 0) {
        cout << "Point lies in second quadrant\n";
    }
    else if (x < 0 && y < 0) {
        cout << "Point lies in third quadrant\n";
    }
    else if (x > 0 && y < 0) {
        cout << "Point lies in forth quadrant\n";
    }

    return 0;
}
