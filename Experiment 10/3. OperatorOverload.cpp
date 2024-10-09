#include <iostream>
using namespace std;

class Complex {
private:
    float real, imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    Complex operator + (Complex const &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }

    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(5.5, 4.5), c2(3.2, 2.8);

    cout << "Complex number 1: ";
    c1.show();

    cout << "Complex number 2: ";
    c2.show();

    Complex c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.show();
}
