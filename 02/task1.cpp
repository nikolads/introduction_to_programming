/**
  * Example solution to task 1.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    if (year < 0) {
        // Ако тялото на if-а се изпълни значи сме намерили отговора на задачата и няма смисъл
        // да правим останалите проверки.
        // Използването на оператора return в main функцията ни позволява да прекъснем изпълнението
        // на програмата преждевременно.
        // Това ни спестява и писане на else блокове.
        cout << "Incorrect\n";
        return 0;
    }

    if (month < 1 || month > 12) {
        cout << "Incorrect\n";
        return 0;
    }

    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day < 1 || day > 31) {
            cout << "Incorrect\n";
            return 0;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            cout << "Incorrect\n";
            return 0;
        }
    }
    else {
        // Използваме, че променливите от тип bool имат числова стойност:
        //  false = 0
        //  true = 1
        if (day < 1 && day > (28 + isLeap)) {
            cout << "Incorrect\n";
            return 0;
        }
    }

    // Ако сме стигнали до тука значи програмата не е влязла в нито една от проверките
    // за некоректност.
    cout << "Correct\n";

    return 0;
}
