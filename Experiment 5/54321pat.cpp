#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = n-i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}
