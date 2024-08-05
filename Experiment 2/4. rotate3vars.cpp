#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Enter the value of Number 1 : ";
    cin >> num1;
    cout << "Enter the value of Number 2 : ";
    cin >> num2;
    cout << "Enter the value of Number 3 : ";
    cin >> num3
    cout << "Before Swap Number 1 = " << num1 << " Number 2 = " << num2 << " Number 3 = " << num3 << endl;
    num3 = num1 * num2 * num3;
    num2 = num3 / (num1 * num2);
    num1 = num3 / (num1 * num2);
    num3 = num3 / (num1 * num2);
    cout << "After Swap Number 1 = " << num1 << " Number 2 = " << num2 << " Number 3 = " << num3 << endl;
    return 0;
};
