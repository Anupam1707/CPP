#include <iostream>
using namespace std;

class Employee {
public:
    char name[20];
    float salary;
};

int main() {
    Employee emp;
    cout << "Enter the Name : ";
    cin.getline(emp.name, 20);
    emp.salary = 20000.67;

    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee Salary: " << emp.salary << endl;
}
