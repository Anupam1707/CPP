#include <iostream>
using namespace std;
int largest(int n1, int n2, int n3) {
    if (n1 > n2 && n1 > n3) return n1;
    else if (n2 > n1 && n2 > n3) return n2;
    else return n3;
}

int main() {
    int n1, n2, n3;
    cout << "Enter the First Number : ";
    cin >> n1;
    cout << "Enter the Second Number : ";
    cin >> n2;
    cout << "Enter the Third Number : ";
    cin >> n3;
    cout << "Largest Number is : " << largest(n1, n2, n3);
}
