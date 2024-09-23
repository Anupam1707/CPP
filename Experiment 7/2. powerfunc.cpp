#include <iostream>
using namespace std;
int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;

    int result = power(x, y);
    cout << x << " raised to the power of " << y << " is " << result << endl;
}
