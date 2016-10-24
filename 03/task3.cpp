/**
  * Example solution to task 3.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int lowest;
    if (a > b) {
        lowest = b;
    }
    else {
        lowest = a;
    }

    int highestDiv;
    for (int i = 1; i <= lowest; i++) {
        if (a % i == 0 && b % i == 0) {
            highestDiv = i;
        }
    }

    cout << highestDiv << "\n";

    return 0;
}
