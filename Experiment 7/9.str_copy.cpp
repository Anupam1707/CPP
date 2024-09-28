#include <iostream>
using namespace std;
void str_copy(char str_1[], char str_2[]){
    for (int i = 0; str_2[i] != '\0'; i++) {
        int tmp = str_1[i];
        str_1[i] = str_2[i];
        str_2[i] = tmp;
    }
}
int main() {
    char str_1[100], str_2[100];
    cout << "Enter string one: ";
    cin.getline(str_1, 100);
    cout << "Enter string two: ";
    cin.getline(str_2, 100);
    str_copy(str_1, str_2);
    cout << "Copied string: " << str_1;
    return 0;
}
