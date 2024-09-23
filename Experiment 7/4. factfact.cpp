#include <iostream>
using namespace std;
int factorial(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    int factorial_result = factorial(n);
    cout << "The factorial of " << n << " is " << factorial_result << endl;
}
