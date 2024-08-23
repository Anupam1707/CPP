// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int num, ogNum, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    ogNum = num;
    while (num > 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == ogNum) cout << "It is a strong number";
    else cout << "It is not a strong number";
    return 0;
}
