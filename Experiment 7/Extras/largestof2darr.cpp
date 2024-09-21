#include <iostream>
using namespace std;

int largest(int arr[][5], int rows, int cols) {
    int mx = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > mx) {
                mx = arr[i][j];
            }
        }
    }
    return mx;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << largest(arr, rows, cols) << endl;
}
