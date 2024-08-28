#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the Number of Rows : ";
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (i % 2 == 0){
                char lch = tolower(ch);
                cout << lch;
            } else cout << ch;
            ch++;
        }
        cout << endl;
    }
}
