#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, digit, temp, count = 0, sum = 0;
    cout << "Enter a Number to be checked : ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    temp = num;
    do {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    } while (temp != 0);

    if (sum == num) {
        cout << num << " is an Armstrong Number";
    } else {
        cout << num << " is not an Armstrong Number";
    }
}
