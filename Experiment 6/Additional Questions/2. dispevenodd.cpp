#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Odd numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Even numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) cout << arr[i] << " ";
    }
    cout << endl;
}