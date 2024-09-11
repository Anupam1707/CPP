#include <iostream>

using namespace std;

int main() {
    int m, n, p, q;
    
    cout << "Enter dimensions for first matrix (m n): ";
    cin >> m >> n;
    int A[m][n];
    
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];
    
    cout << "Enter dimensions for second matrix (p q): ";
    cin >> p >> q;
    int B[p][q];
    
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < q; ++j)
            cin >> B[i][j];
    
    if (n != p) {
        cout << "Matrix multiplication not possible." << endl;
        return 1;
    }
    
    int C[m][q];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
