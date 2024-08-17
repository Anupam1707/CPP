#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "BOTH" << endl;
    } else if (number % 3 == 0) {
        cout << "THREE" << endl;
    } else if (number % 5 == 0) {
        cout << "FIVE" << endl;
    } else {
        cout << "NOT" << endl;
    }
}
