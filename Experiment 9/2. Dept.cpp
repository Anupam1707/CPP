#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    float salary;
    string department;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter department: ";
        cin >> department;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.showData();
}
