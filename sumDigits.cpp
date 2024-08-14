#include <iostream>
using namespace std;
int main() {
    int num, temp, sm=0, digit;
    cout << "Enter a Number : ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sm = sm + digit;
        temp /= 10;
    }
    cout << sm;
}
