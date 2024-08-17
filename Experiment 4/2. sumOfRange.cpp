#include <iostream>
using namespace std;
int main() {
    int m, n, sum = 0;
    cout << "Enter Starting Point : ";
    cin >> m;
    cout << "Enter Ending Point : ";
    cin >> n;
    for (int i = m; i < n; i++) {
        sum += i;
    }
    cout << "Sum of number from " << m << " to " << n << " is " << sum;
}
