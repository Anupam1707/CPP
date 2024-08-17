#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is a capital letter." << endl;
        cout << "Converted to small letter : " << (char)(ch + 32) << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a small letter." << endl;
        cout << "Converted to capital letter : " << (char)(ch - 32) << endl;
    } else {
        cout << "The character is neither a small nor a capital letter." << endl;
    }
}
