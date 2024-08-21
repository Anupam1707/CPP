#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cout << "Enter base (X): ";
    cin >> X;
    cout << "Enter exponent (Y): ";
    cin >> Y;

    int result = 1;
    for (int i = 1; i <= Y; ++i) {
        result *= X;
    }

    cout << "Result of " << X << "^" << Y << " is: " << result << endl;
}
