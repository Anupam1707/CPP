#include <iostream>

using namespace std;

int main() {
    int start = 65;
    int end = 122;

    cout << "Uppercase and lowercase alphabets: ";
    for (int i = start; i <= end; ++i) {
        if (i >= 91 && i <= 96) {
            continue;
        }
        cout << char(i) << ' ';
    }
}
