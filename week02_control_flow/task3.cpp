/**
  * Example solution to task 3.
  * Author: Nikola Stoyanov
  */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    bool isPrime = true;
    for (int i = 2; i < sqrt(num) && isPrime; i++) {
        if (num % i == 0) {
            isPrime = false;
        }
    }

    // num е мерсеново число когато num = 2^n - 1 за някое n.
    // Следователно трябва да проверим дали num + 1 е точна степен на 2.
    bool isPowOfTwo = true;
    for (int i = num + 1; i > 1 && isPowOfTwo; i /= 2) {
        if (i % 2 == 0) {
            isPowOfTwo = false;
        }
    }

    if (isPrime && isPowOfTwo) {
        cout << "Number is Mersenne prime\n";
    }
    else {
        cout << "Number is not Mersenne prime\n";
    }

    return 0;
}
