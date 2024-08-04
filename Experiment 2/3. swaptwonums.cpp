#include <iostream>
using namespace std;
int main() {
    int num1;
    int num2;
    cout << "Enter the value of Number 1 : ";
    cin >> num1;
    cout << "Enter the value of Number 2 : ";
    cin >> num2;
    cout << "Before swap Number 1 = " << num1 << ", Number 2  = " << num2 << endl;
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    cout << "After swap Number 1 = " << num1 << ", Number 2 = " << num2 << endl;
}
