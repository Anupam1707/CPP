#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, secondLarge;
    cout << "Enter the First Number : ";
    cin >> n1;
    cout << "Enter the Second Number : ";
    cin >> n2;
    cout << "Enter the Third Number : ";
    cin >> n3;

    if (n1 > n2) {
        if (n1 > n3 ) {
            if (n2 > n3) secondLarge = n2;
            else secondLarge = n3;
        }
        else {
            if (n1 > n2) secondLarge = n1;
            else secondLarge = n2;
        }
    }
    else {
        if (n2 > n3 ) {
            if (n1 > n3) secondLarge = n1;
            else secondLarge = n3;
        }
        else {
            if (n1 > n2) secondLarge = n1;
            else secondLarge = n2;
        }
    }
    cout << "The Second Largest Number is : " << secondLarge;
}
