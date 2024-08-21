#include <iostream>
using namespace std;

int main() {
    int upperStart = 65;
    int upperEnd = 90;
    int lowerStart = 97;
    int lowerEnd = 122;

    cout << "Uppercase alphabets: ";
    for (int i = upperStart; i <= upperEnd; ++i) {
        cout << char(i) << ' ';
    }
    cout << endl;

    cout << "Lowercase alphabets: ";
    for (int i = lowerStart; i <= lowerEnd; ++i) {
        cout << char(i) << ' ';
    }
    cout << endl;
}
