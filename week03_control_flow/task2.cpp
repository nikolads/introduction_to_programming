/**
  * Example solution to task 2.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    // Кратност на сумата от цифрите
    {
        cout << "Numbers divisible by the sum of their digits:\n";

        int count = 0;

        for (int num = 100; num < 1000; num++) {
            int digit1 = num % 10;
            int digit2 = num / 10 % 10;
            int digit3 = num / 100;

            int sum = digit1 + digit2 + digit3;
            if (num % sum == 0) {
                cout << num << "\n";
                count++;
            }
        }

        cout << "Count: " << count << "\n";
    }

    // Кратност на произведението от цифрите
    {
        cout << "Numbers divisible by the product of their digits:\n";

        int count = 0;

        for (int num = 100; num < 1000; num++) {
            int digit1 = num % 10;
            int digit2 = num / 10 % 10;
            int digit3 = num / 100;

            int prod = digit1 * digit2 * digit3;

            // Ако някоя от цифрите е 0 произведението prod ще стане 0.
            // Трябва да добавим проверка за това, защото при целите числа делението на 0
            // (използвайки / или %) не е позволено и в такъв случай програмата гърми с грешка.
            //
            // Използваме факта, че операторът && е мързелив, т.е. ако prod != 0 върне false
            // дясната страна няма да се изпълни, защото false && <anything> = false.
            if (prod != 0 && num % prod == 0) {
                cout << num << "\n";
                count++;
            }
        }

        cout << "Count: " << count << "\n";
    }

    return 0;
}
