#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int i = 1;
    do {
        cout << i << endl;
        i++;
    }
    while (i <= 5);
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 1;
    cout << "Enter a Number : ";
    cin >> n;
    do {
        cout << i << endl;
        i++;
    }
    while (i <= n);
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int sm = 0;
    int i = 1;
    cout << "Enter a number : ";
    cin >> n;
    do {
        sm += i;
        i++;
    }
    while (i <= n);
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
    do {
        fact *= i;
        i++;
    }
    while (i <= n)
    cout << fact;
}
