#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0, i = 1;

    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        ++i;
    }

    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
}
