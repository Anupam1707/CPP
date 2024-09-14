#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], nmatrix[4][4], sum = 0, tsum = 0;
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            nmatrix[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += nmatrix[i][j];
        }
        nmatrix[i][cols] = sum;
        tsum += sum;
    }

    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += nmatrix[i][j];
        }
        nmatrix[rows][j] = sum;
        tsum += sum;
    }
    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < cols + 1; j++) {
            cout << nmatrix[i][j]<< " ";
        }
        cout << endl;
    }
    sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += nmatrix[i][j];
        }
    }
    nmatrix[3][3] = 2 * sum;
}
