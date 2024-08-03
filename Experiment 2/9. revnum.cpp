#include <iostream>
using namespace std;
int main(){
    int num, digit;
    int newnum = 0;
    int n1, n2, n3, n4;

    cout << "Enter a 4-Digit Number : ";
    cin >> num;
    digit = num;

    n1 = digit % 10;
    digit /= 10;
    newnum = newnum * 10 + n1;

    n2 = digit % 10;
    digit /= 10;
    newnum = newnum * 10 + n2;

    n3 = digit % 10;
    digit /= 10;
    newnum = newnum * 10 + n3;

    n4 = digit % 10;
    digit /= 10;
    newnum = newnum * 10 + n4;


    cout << "The Reverse of the digits of " << num << " is " << newnum;
}
