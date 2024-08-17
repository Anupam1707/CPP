#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout << "Enter Number of Elements : ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        sum += i * i;
        i++;
    }
    cout << "Sum of Elements is : " << sum;
}
