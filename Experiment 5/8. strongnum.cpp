#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0, fact = 1;
    cout << "Enter Number : ";
    cin >> num;
    int temp = num;
    while (temp != 0) {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num) cout << "Strong";
    else cout << "Not Strong";
}
