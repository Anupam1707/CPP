#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int matrix[m][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sumDiagonal1 = 0;
    for (int i = 0; i < m; i++) {
        sumDiagonal1 += matrix[i][i];
    }
    cout << "Sum of diagonal 1: " << sumDiagonal1 << endl;
}
