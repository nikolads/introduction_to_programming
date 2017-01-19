/**
  * Example solution to task 3.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int prod = 1;
        for (int k = i; k <= 2 * i; k++) {
            prod *= k;
        }

        sum += prod;
    }

    cout << sum << "\n";

    return 0;
}
