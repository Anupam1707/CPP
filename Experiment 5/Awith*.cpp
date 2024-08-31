#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << " ";
        }
        cout << " * ";
        if (i == n/2 + 1){
            for (int k = 1; k <= i-1; k++){
                cout << "* ";
            }
            // cout << " * ";
        } else if (i == 1){
            for (int k = 1; k <= i-2; k++){
                cout << "  ";
            }
        } else {
            for (int k = 1; k <= i-2; k++){
                cout << "  ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
