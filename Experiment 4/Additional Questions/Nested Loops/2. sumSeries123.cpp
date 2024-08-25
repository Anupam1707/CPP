#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, totalSum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
        totalSum += sum;
        cout << "1";
        for (int j = 2; j <= i; j++) {
            cout << "+" << j;
        }
        cout << endl;
    }

    cout << "The sum of the series is: " << totalSum << endl;
}
