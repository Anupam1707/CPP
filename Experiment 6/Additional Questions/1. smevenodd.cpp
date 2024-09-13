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
    int sumOdd = 0;
    int sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) sumEven += arr[i];
        else sumOdd += arr[i];
    }
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
}
