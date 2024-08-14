#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int sm = 0;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sm += i;
    }
    cout << sm;
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int fact = 1;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << fact;
}
