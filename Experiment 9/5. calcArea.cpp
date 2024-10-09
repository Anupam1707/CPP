#include <iostream>
using namespace std;

class Shapes {
private:
    float area;

public:
    void calArea(float length, float width) {
        area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }

    void calArea(float side) {
        area = side * side;
        cout << "Area of Square: " << area << endl;
    }
};

int main() {
    Shapes shape;
    shape.calArea(5.0f, 10.0f);
    shape.calArea(4.0f);
}
