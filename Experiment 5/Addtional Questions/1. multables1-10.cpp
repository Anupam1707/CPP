#include <iostream>
using namespace std;

int main() {
    int num = 10;
    for (int i = 1; i <= num; i++) {
        cout << "Multiplication Table for " << i;
        cout << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i*j;
            cout << endl;
        }
        cout << endl;
    }
}
