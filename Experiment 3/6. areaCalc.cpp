#include <iostream>
using namespace std;
int main() {
    int choice;
    const float pi = 3.14;
    double base, height, length, width, radius, area;
    cout << "Welcome to the Area Calculator!\n";
    cout << "1. Area of a Triangle\n";
    cout << "2. Area of a Rectangle\n";
    cout << "3. Area of a Circle\n";
    cout << "4. Area of a Sphere\n";
    cout << "Enter your Choice : ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << " squnits" << endl;
            break;
        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << " squnits" << endl;
            break;
        case 3:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = pi * radius * radius;
            cout << "Area of the circle: " << area << " squnits" << endl;
            break;
        case 4:
            cout << "Enter radius of the sphere: ";
            cin >> radius;
            area = 4 * pi * radius * radius;
            cout << "Area of the sphere: " << area << " squnits" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}
