#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the First Number : ";
    cin >> num1;
    cout << "Enter the Second Number : ";
    cin >> num2;


    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator" << endl;
            return 1;
    }
    cout << "Result: " << result << endl;
}
