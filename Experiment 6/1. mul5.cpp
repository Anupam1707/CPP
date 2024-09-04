#include <iostream>
using namespace std;
int main() {
    int arr1[5], arr2[2][2], num = 5;

    cout << "Enter Elements for 1D Array : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << " : ";
        cin >> arr1[i];
    }
    for (int i = 0; i < 5; i++) {
        arr1[i] = arr1[i] * num;
    }
    cout << "Resulting 1D Array : ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl << endl;
    cout << "Enter Elements for 2D Array : " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << i << ", " << j << " : ";
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arr2[i][j] = arr2[i][j] * num;
        }
    }
    cout << "Resulting 2D Array : ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr2[i][j] << " ";
        }
    }
}
