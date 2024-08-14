#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a Character : ";
    cin >> ch;
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "Vowel";
                break;
            default:
                cout << "Consonant";
        }
    } else {
        cout << "Not a letter";
    }
}
