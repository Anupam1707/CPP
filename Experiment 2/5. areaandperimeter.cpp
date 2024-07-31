#include <iostream>
using namespace std;
int main(){
    float radius;
    const float pi = 3.14;
    float area, perimemter;

    cout << "Enter the Radius of Circle : ";
    cin >> radius;

    area = pi * (radius)*(radius);
    perimemter = 2 * pi * radius;

    cout << "For the given Radius of Circle : " << radius << endl;
    cout << "Area is : " << area << endl;
    cout << "Perimeter is " << perimemter << endl;
}
