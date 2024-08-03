#include <iostream>
using namespace std;
int main(){
    int num, digit;
    int sum = 0;
    int n1, n2, n3, n4;

    cout << "Enter a 4-Digit Number : ";
    cin >> num;
    digit = num;

    n1 = digit % 10;
    digit /= 10;

    n2 = digit % 10;
    digit /= 10;

    n3 = digit % 10;
    digit /= 10;

    n4 = digit % 10;
    digit /= 10;

    sum = n1 + n2 + n3 + n4;
    cout << "The Sum of the digits of " << num << " is " << sum;
}
