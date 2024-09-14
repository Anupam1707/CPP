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
    int sumUpperTriangular = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i; j < n; j++) {
            sumUpperTriangular += matrix[i][j];
        }
    }
    cout << "Sum of upper triangular elements: " << sumUpperTriangular << endl;
}
