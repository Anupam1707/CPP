
void reverseString(char* str, int size) {
    char* start = str;
    char* end = str + size;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    reverseString(str, i - 1);
    cout << "Reversed string: " << str << endl;
}
