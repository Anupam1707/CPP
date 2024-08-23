#include <iostream>
using namespace std;
int main() {
    int num1, num2, temp1, temp2, gcd, lcm;
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    temp1 = num1
    temp2 = num2;
    while (temp2 != 0) {
        gcd = temp2;
        temp2 = temp1 % temp2;
        temp1 = gcd;
    }
    lcm = (num1 * num2) / gcd;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
}
