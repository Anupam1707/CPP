#include <iostream>
using namespace std;

class Complex {
    float real;
    float imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(2.3, 4.5);
    Complex c2(3.4, 5.6);
    Complex result = c1 + c2;
    result.show();
    return 0;
}
