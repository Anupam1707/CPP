#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100] = "HelloWorld";
    char s2[100] = "Hello";
    char ch = 'o';
    int n = 4;

    cout << "String s1: " << s1 << endl;
    cout << "String s2: " << s2 << endl;
    cout << "Length of s1: " << strlen(s1) << endl;
    cout << "Reversed s1: " << strrev(s1) << endl;
    cout << "Lowercase s1: " << strlwr(s1) << endl;
    cout << "Uppercase s1: " << strupr(s1) << endl;

    strcpy(s1, s2);
    cout << "Copy s2 to s1: " << s1 << endl;

    strncpy(s1, "World", n);
    cout << "Copy n characters from World to s1: " << s1 << endl;

    strcat(s1, s2);
    cout << "Concatenate s2 to s1: " << s1 << endl;

    strncat(s1, "World", n);
    cout << "Concatenate n characters of World to s1: " << s1 << endl;

    cout << "Comparison of s1 and s2: " << strcmp(s1, s2) << endl;

    cout << "Comparison of first n characters of s1 and s2: " << strncmp(s1, s2, n) << endl;

    cout << "Character '" << ch << "' in s1: " << strchr(s1, ch) << endl;

    cout << "Last occurrence of character '" << ch << "' in s1: " << strrchr(s1, ch) << endl;
}
