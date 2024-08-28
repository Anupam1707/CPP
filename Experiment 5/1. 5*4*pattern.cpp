#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int k = n; k > n-i; k--) {
            cout << "*";
        }
        cout << endl;
    }
}
