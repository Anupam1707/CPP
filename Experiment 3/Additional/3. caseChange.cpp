#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch)) {
        cout << "The character is a capital letter." << endl;
        cout << "Converted to small letter: " << (char)tolower(ch) << endl;
    } else if (islower(ch)) {
        cout << "The character is a small letter." << endl;
        cout << "Converted to capital letter: " << (char)toupper(ch) << endl;
    } else {
        cout << "The character is neither a small nor a capital letter." << endl;
    }
}
