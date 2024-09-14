#include <iostream>
using namespace std;
int main() {
    int m, n, p, q;
    cout << "Enter the dimensions of matrix 1 (m n): ";
    cin >> m >> n;
    cout << "Enter the dimensions of matrix 2 (p q): ";
    cin >> p >> q;
    if (m != p || n != q) {
        cout << "Matrix addition is not possible. The dimensions of the matrices must be the same." << endl;
        return 0;
    }
    int matrix1[m][n];
    int matrix2[m][n];
    int sumMatrix[m][n];
    cout << "Enter the elements of matrix 1:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of matrix 2:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
