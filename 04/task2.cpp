/**
  * Example solution to task 2.
  * Author: Nikola Stoyanov
  */

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Въвеждаме си числото, което ще търсим.
    int lookupNum;
    cin >> lookupNum;

    bool found = false;
    // Обхождаме масива и сравняваме всеки елемент с числото, което търсим.
    for (int i = 0; i < n && !found; i++) {
        if (arr[i] == lookupNum) {
            found = true;
        }
    }

    if (found) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}
