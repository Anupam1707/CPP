#include <iostream>
using namespace std;

bool isPalindrome(const char* str, int size) {
    const char* left = str;
    const char* right = str + size - 1;

    while (left < right) {
        if (*left != *right)
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
}
