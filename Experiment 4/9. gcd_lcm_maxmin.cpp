#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int GCD = gcd(num1, num2);
    int mx = (num1 > num2) ? num1 : num2;
    int mn = (num1 < num2) ? num1 : num2;
    int lcm = (num1 * num2) / GCD;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << GCD << endl;
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << mx << endl;
    cout << "Minimum of " << num1 << " and " << num2 << " is: " << mn << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
}
