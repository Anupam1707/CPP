#include <iostream>
using namespace std;
int main() {
    int num, temp, digit, sum = 0;
    cout << "Enter a Number : ";
    cin >> num;
    temp = num;
    do {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    while (temp != 0);
    cout << "The sum of digits of " << num << " is " << sum;
}
