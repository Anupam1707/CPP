#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < (i < 3 ? i : 3); ++j) {
            sum += matrix[i][j];
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
    cout << "Sum of lower triangular matrix: " << sum << endl;
}
