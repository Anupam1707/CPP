#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n1, n2, digit, temp, count = 0, sum = 0;
    cout << "Enter the Starting Number : ";
    cin >> n1;
    cout << "Enter the Ending Number : ";
    cin >> n2;
    for (int i = n1; i <= n2; i++) {
        sum = 0;
        count = 0;
        temp = n1;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        temp = num;
        do {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        } while (temp != 0);
    
        if (sum == num) {
            cout << num << " is an Armstrong Number";
        } else {
            cout << num << " is not an Armstrong Number";
        }
    }
}
