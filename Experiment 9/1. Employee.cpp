#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
    char name[20];
    float salary;
};

int main() {
    Employee emp;
    strcpy(emp.name, "Scott");
    emp.salary = 20000.67;

    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee Salary: " << emp.salary << endl;
}
