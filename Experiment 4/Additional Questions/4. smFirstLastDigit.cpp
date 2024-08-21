#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int firstDigit = num % 10;
    int lastDigit = num;

    while (lastDigit >= 10) {
        lastDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    cout << "Sum of the first and last digit: " << sum << endl;
}
