#include <iostream>
using namespace std;
void str_cpy(char str_1[], char str_2[]) {
    while (*str_1) {
        *str_2 = *str_1;
        str_1++;
        str_2++;
    }
}
int main() {
    char str_1[20], str_2[20];
    cout << "Enter a string: ";
    cin.getline(str_1, 20);
    str_cpy(str_1, str_2);
    cout << "Copied string: " << str_1;
    return 0;
}
