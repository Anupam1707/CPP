#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter the First Number : ";
    cin >> num1;
    cout << "Enter the Second Number : ";
    cin >> num2;

    (num1 > num2) ? cout << num1 << " is larger than " << num2 : cout << num2 << " is larger than " << num1;
}
