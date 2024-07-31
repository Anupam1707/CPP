#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
    cout << "Enter the value of z : ";
    cin >> z;
    cout << "Before swap x = " << x << " y = " << y << " z = " << z << endl;
    z = x * y * z;
    y = z / (x * y);
    x = z / (x * y);
    z = z / (x * y);
    cout << "After swap x = " << x << " y = " << y << " z = " << z << endl;
    return 0;
}
