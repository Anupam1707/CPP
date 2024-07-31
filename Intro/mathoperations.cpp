#include <iostream>
using namespace std;
int main() {
    int a, b, sum, sub, div, mul;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "\nEnter the value of b : ";
    cin >> b;
    sum = a + b;
    sub = a - b;
    div = a / b;
    mul = a * b;
    cout << "Addition of a = " << a << " and b = " << b << " is : " << sum << endl;
    cout << "Subtraction of a = " << a << " and b = " << b << " is : " << sub << endl;
    cout << "Multiplication of a = " << a << " and b = " << b << " is : " << mul << endl;
    cout << "Division of a = " << a << " and b = " << b << " is : " << div << endl;
};
