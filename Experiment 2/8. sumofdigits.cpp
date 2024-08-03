#include <iostream>
using namespace std;
int main(){
    int num, temp, digit;
    int sum = 0;

    cout << "Enter a 4-Digit Number : ";
    cin >> num;
    temp = num;

    digit = temp % 10;
    temp /= 10;
    sum += digit;

    digit = temp % 10;
    temp /= 10;
    sum += digit;

    digit = temp % 10;
    temp /= 10;
    sum += digit;

    digit = temp % 10;
    temp /= 10;
    sum += digit;

    cout << "The Sum of the digits of " << num << " is " << sum;
}
