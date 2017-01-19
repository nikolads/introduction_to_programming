/**
  * Example solution to task 1.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int num = 100; num < 1000; num++) {
        int digit1 = num % 10;
        int digit2 = num / 10 % 10;
        int digit3 = num / 100;

        if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
