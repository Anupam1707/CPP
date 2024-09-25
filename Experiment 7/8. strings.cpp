#include <iostream>
using namespace std;

int string_length(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

bool string_compare(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return str1[i] == str2[i];
}

void string_copy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void string_concatenate(char dest[], const char src[]) {
    int dest_length = string_length(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_length + i] = src[i];
        i++;
    }
    dest[dest_length + i] = '\0';
}

void string_reverse(char str[]) {
    int length = string_length(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    int length = string_length(str1);
    cout << "Length of the first string: " << length << endl;
  
    if (string_compare(str1, str2)) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }
  
    string_copy(str2, str1);
    cout << "Copied string: " << str2 << endl;

    string_concatenate(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    string_reverse(str1);
    cout << "Reversed string: " << str1 << endl;
}
