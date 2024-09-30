#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;

    while (*ptr) {
        ptr++;
    }
    while (ptr >= str) {
        cout << *ptr;
        ptr--;
    }
}
