#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

float sum(float a, float b) {
    return a + b;
}

int main() {
    cout << "Sum of two integers: " << sum(5, 10) << endl;
    cout << "Sum of three integers: " << sum(5, 10, 15) << endl;
    cout << "Sum of two floats: " << sum(5.5f, 10.3f) << endl;
}
