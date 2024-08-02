#include <iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;
    cout << "Enter the Temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (9.0 / 5) * celsius + 32;
    cout << "The Temperature in Fahrenheit is " << fahrenheit << " degrees.";
}
