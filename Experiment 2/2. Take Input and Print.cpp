#include <iostream>
using namespace std;
int main() {
    char Name[20];
    int Age;
    char City[20];
    char Gender[6];
    int Height;
    char Institute[10];
    char Profession[20];

    cout << "Enter Your Name : ";
    cin >> Name;
    cout << "Enter Your Age : ";
    cin >> Age;
    cout << "Enter Your Gender : ";
    cin >> Gender;
    cout << "Enter Your City : ";
    cin >> City;
    cout << "Enter Your Height : ";
    cin >> Height;
    cout << "Enter Your Institute : ";
    cin >> Institute;
    cout << "Enter Your Profession : ";
    cin >> Profession;

    cout << "\nName : " << Name << endl;
    cout << "Age : " << Age << endl;
    cout << "Gender : " << Gender << endl;
    cout << "City : " << City << endl;
    cout << "Height : " << Height << endl;
    cout << "Institute : " << Institute << endl;
    cout << "Profession : " << Profession << endl;
};
