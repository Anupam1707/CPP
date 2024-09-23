#include <iostream>
using namespace std;
double largest_of_three(double x, double y, double z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

int main() {
    double x, y, z;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;

    double largest = largest_of_three(x, y, z);
    cout << "The largest number is: " << largest << endl;
}
