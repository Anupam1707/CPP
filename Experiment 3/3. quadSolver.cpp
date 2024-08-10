#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    double D, root1, root2;
    cout << "Welcome to the Quadratic Equation Solver!" << endl;
    cout << "Enter the Value of a : ";
    cin >> a;
    cout << "Enter the Value of b : ";
    cin >> b;
    cout << "Enter the Value of c : ";
    cin >> c;

    cout << "For the given quadratic equation\n" << a << "x^2" << " + " << b << "x" << " + " << c << endl;

    D = b*b - 4*a*c;
    if (D > 0) {
        cout << "Roots are Real and Unequal" << endl;
        root1 = (-b + sqrt(D))/2 * a;
        root2 = (-b - sqrt(D))/2 * a;
        cout << "The Roots of the Given equation are : \n" << "Root 1 : " << root1 << "\nRoot 2 : " << root2 << endl;
    } else if (D == 0) {
        cout << "Roots are Real and Equal" << endl;
        root1 = -b / 2 * a;
        root2 = root1;
        cout << "The Roots of the Given equation are : \n" << "Root 1 : " << root1 << "\nRoot 2 : " << root2 << endl;
    } else {
        cout << "Roots are Imaginary" << endl;
        double realPart = -b / 2 * a;
        double imaginaryPart = sqrt(-D)/2 * a;
        cout << "The Roots of the Given equation are : \n" << "Root 1 : " << realPart << " + i" << imaginaryPart << "\nRoot 2 : " << realPart << " - i" << imaginaryPart << endl;
    }
}
