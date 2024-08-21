#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Leap years from 1 to " << N << " are: ";
    for (int year = 1; year <= N; ++year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
    cout << endl;
}
