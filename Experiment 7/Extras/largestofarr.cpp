#include <iostream>
using namespace std;
int largest(int arr[], int l) {
    int mx = arr[0];
    for (int i = 0; i < l; i++) {
        if (arr[i] > mx) mx = arr[i];
    }
    return mx;
}

int main() {
    int l;
    cout << "Enter the Number of Elements : ";
    cin >> l;
    int arr[l];
    for (int i; i < l; i++) {
        cout << "Enter the Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Largest Number is : " << largest(arr, l);
}
