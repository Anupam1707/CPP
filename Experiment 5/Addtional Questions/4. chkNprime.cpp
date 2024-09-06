#include <iostream>
using namespace std;
int main() {
    int n1, n2, digit, temp, count = 0, sum = 0;
    cout << "Enter the Starting Number : ";
    cin >> n1;
    cout << "Enter the Ending Number : ";
    cin >> n2;
    for (int i = n1; i <= n2; i++) {
        count = 0;
        sum = 0;
        bool isPrime = true;
        if (i <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << i << " is a Prime Number" << endl;
        }
    }
}
