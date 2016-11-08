/**
  * Example solutions to tasks for week 5.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

// Прочита масив от стандартния вход и го записва в outArr.
void readArray(int outArr[], int& outLen);

// Принтира масив на стандартния изход.
void printArray(int arr[], int& len);

// Сортира масив arr.
void selSort(int arr[], int len);

// Приема предварително сортиран масив arr.
// В outArr записва елементите на arr без повторения.
void remDuplicates(int arr[], int len, int outArr[], int& outLen);

// Алтернативна имплементация на remDuplicates.
// Не записва резултата в друг масив, а директно модифицира arr така, че
// да не съдържа повтарящи се елементи.
//
// Приема предварително сортиран масив arr с дължина len.
// След изпълнение на функцията arr ще съдържа всички неповтарящи се елементи,
// a len ще съдържа новата дължина на масива.
void remDuplicatesInPlace(int arr[], int& len);

// Приема два масива a и b.
// В outArr записва първо всички елементи от a, после всички елементи от b.
void mergeArrays(int a[], int aLen, int b[], int bLen, int outArr[], int& outLen);

void task3_1();
void task3_2();
void task4();
void task5();

int main() {
    // Разкоментирайте задачата, която искате да тествате.
    // task3_1();
    // task3_2();
    // task4();
    // task5();

    return 0;
}

void readArray(int outArr[], int& outLen) {
    cin >> outLen;

    for (int i = 0; i < outLen; i++) {
        cin >> outArr[i];
    }
}

void printArray(int arr[], int& len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void selSort(int arr[], int len) {
    for (int pos = 0; pos < len - 1; pos++) {
        int indexMin = pos;
        for (int i = pos + 1; i < len; i++) {
            if (arr[i] < arr[indexMin]) {
                indexMin = i;
            }
        }

        int temp = arr[pos];
        arr[pos] = arr[indexMin];
        arr[indexMin] = temp;
    }
}

void remDuplicates(int arr[], int len, int outArr[], int& outLen) {
    // Добавяме първия елемент на arr в outArr, ако има такъв.
    if (len > 0) {
        outArr[0] = arr[0];
        outLen = 1;
    }

    // Обхождаме масива arr и разглеждаме съседните елементи по двойки.
    // Понеже масива е сортиран, ако има еднакви елементи те ще са съседни.
    // Ако намерим елемент, различен от предходния, го добавяме в outArr.
    for (int i = 1; i < len; i++) {
        if (arr[i-1] != arr[i]) {
            outArr[outLen] = arr[i];
            outLen++;
        }
    }
}

void remDuplicatesInPlace(int arr[], int& len) {
    for (int i = 1; i < len;) {
        if (arr[i-1] == arr[i]) {
            // Ако намерим два еднакви елемента, то трябва да премахнем втория от масива.
            // За целта избутваме всички елементи след него с една позиция напред и
            // намаляме брояча за дължина на масива с 1.
            for (int j = i; j < len - 1; j++) {
                arr[j] = arr[j+1];
            }
            len--;
        }
        else {
            // Увеличаваме i само ако елементите са различни, защото в противен случай
            // искаме да сравним текущия arr[i-1] с новия arr[i].
            i++;
        }
    }
}

void mergeArrays(int a[], int aLen, int b[], int bLen, int outArr[], int& outLen) {
    outLen = 0;

    for (int i = 0; i < aLen; i++) {
        outArr[outLen] = a[i];
        outLen++;
    }

    for (int i = 0; i < bLen; i++) {
        outArr[outLen] = b[i];
        outLen++;
    }
}

void task3_1() {
    int first[100];
    int firstLen;
    readArray(first, firstLen);

    int second[100];
    int secondLen;
    readArray(second, secondLen);

    int merged[200];
    int mergedLen;
    mergeArrays(first, firstLen, second, secondLen, merged, mergedLen);
    selSort(merged, mergedLen);

    remDuplicatesInPlace(merged, mergedLen);
    printArray(merged, mergedLen);

    // Алтернативно, използвайки remDuplicates
    // int res[200];
    // int resLen;
    // remDuplicates(merged, mergedLen, res, resLen);
    // printArray(res, resLen);
}

void task3_2() {
    int first[100];
    int firstLen;
    readArray(first, firstLen);

    int second[100];
    int secondLen;
    readArray(second, secondLen);

    int res[200];
    int resLen = 0;

    for (int i = 0; i < firstLen; i++) {
        for (int j = 0; j < secondLen; j++) {
            if (first[i] == second[j]) {
                res[resLen] = first[i];
                resLen++;
            }
        }
    }

    printArray(res, resLen);
}

void task4() {
    int arr[100];
    int arrLen;
    readArray(arr, arrLen);
    selSort(arr, arrLen);

    remDuplicatesInPlace(arr, arrLen);
    printArray(arr, arrLen);

    // Алтернативно, използвайки remDuplicates
    // int res[100];
    // int resLen;
    // remDuplicates(arr, arrLen, res, resLen);
    // printArray(res, resLen);
}

void task5() {
    int arr[100];
    int arrLen;
    int k;

    readArray(arr, arrLen);
    printArray(arr, arrLen);
    cin >> k;

    selSort(arr, arrLen);
    remDuplicatesInPlace(arr, arrLen);

    if (arrLen < k) {
        cout << "No such number\n";
    }
    else {
        cout << arr[arrLen - k] << "\n";
    }
}
