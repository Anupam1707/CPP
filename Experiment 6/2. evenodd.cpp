#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter the Elements of the Array : " << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " : ";
        cin >> arr[i];
    }

    cout << "Even numbers in the array are :" << endl;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers in the array are :" << endl;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
