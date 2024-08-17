#include <iostream>
using namespace std;
int main() {
    int num, rev, temp;
    cout << "Enter a Number to be checked : ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (num == rev) {
        cout << num << " is a Palindrome Number.";
    } else {
        cout << num << " is not a Palindrome Number.";
    }
}
