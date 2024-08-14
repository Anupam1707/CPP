#include <iostream>
using namespace std;
int main() {
    int num, temp, rev=0, digit;
    cout << "Enter a Number : ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    cout << rev;
}
