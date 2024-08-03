#include <iostream>
using namespace std;
int main(){
    int num, temp, digit;
    int newnum = 0;

    cout << "Enter a 4-Digit Number : ";
    cin >> num;
    temp = num;

    digit = temp % 10;
    temp /= 10;
    newnum = newnum * 10 + digit;

    digit = temp % 10;
    temp /= 10;
    newnum = newnum * 10 + digit;

    digit = temp % 10;
    temp /= 10;
    newnum = newnum * 10 + digit;

    digit = temp % 10;
    temp /= 10;
    newnum = newnum * 10 + digit;


    cout << "The Reverse of the digits of " << num << " is " << newnum;
}
