#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 1;
    cout << "Enter a Number : ";
    cin >> n;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int sm = 0;
    int i = 1;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n) {
        sm += i;
        i++;
    }
    cout << sm;
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int fact = 1;
    int i = 1;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << fact;
}
