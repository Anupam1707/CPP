#include <iostream>
using namespace std;

class Rectangle {
protected:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};

class Box : public Rectangle {
private:
    float depth;

public:
    Box(float l, float w, float d) : Rectangle(l, w) {
        depth = d;
    }

    float area() {
        return length * width * depth;
    }
};

int main() {
    Rectangle rect(5.0, 10.0);
    Box box(5.0, 10.0, 4.0);

    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Volume of Box: " << box.area() << endl;
}
