#include <iostream>
using namespace std;

int main() {
    int num, posCount = 0, negCount = 0, zeroCount = 0;

    do {
        cout << "Enter a number (or 1111 to stop): ";
        cin >> num;

        if (num > 0) {
            posCount++;
        } else if (num < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    } while (num != 1111);

    cout << "Positive numbers: " << posCount << endl;
    cout << "Negative numbers: " << negCount << endl;
    cout << "Zeros: " << zeroCount << endl;
}
