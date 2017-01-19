/**
  * Example solution to task 4.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int ARR_SIZE = 7;
    int arr[ARR_SIZE];

    for (int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];
    }

    // Забелязва се, че най-отдалеченият елемент ще е или най-малкия или най-големия елемент на масива
    // Затова ги намира при обхождането и после проверяваме само с тях
    int minElem = arr[0];
    int maxElem = arr[0];
    float avg = 0.0;

    for (int i = 0; i < ARR_SIZE; i++) {
        if (arr[i] < minElem) {
            minElem = arr[i];
        }

        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }

        avg += arr[i];
    }
    avg /= ARR_SIZE;

    float distMin = avg - minElem;
    float distMax = maxElem - avg;

    float EPS = 0.000001;
    if (distMin > distMax + EPS) {
        cout << minElem << "\n";
    }
    else if (distMax > distMin + EPS) {
        cout << maxElem << "\n";
    }
    else {
        // abs(distMin - distMax) < EPS, т.е. distMin = distMax
        // В условието не е указано какво да се изведе в случай, че разстоянията са равни,
        // в нашия случай просто ще изведем най-малкия елемент.
        cout << minElem << "\n";
    }

    return 0;
}
