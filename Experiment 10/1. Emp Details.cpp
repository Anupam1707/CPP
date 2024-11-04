#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    int Emp_id;
    char Emp_name[20];
    float Emp_sal;
public:
    Employee() {}

    Employee(int id, const char* name, float salary) {
        Emp_id = id;
        strcpy(Emp_name, name);
        Emp_sal = salary;
    }

    void display() {
        cout << "\nEmployee ID: " << Emp_id << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee Salary: " << Emp_sal << endl;
    }
};

int main() {
    int Emp_id;
    char Emp_name[20];
    float Emp_sal;

    Employee emp[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter Employee ID: ";
        cin >> Emp_id;
        cout << "Enter Employee Name: ";
        cin >> Emp_name;
        cout << "Enter Employee Salary: ";
        cin >> Emp_sal;

        emp[i] = Employee(Emp_id, Emp_name, Emp_sal);
    }

    for (int i = 0; i < 2; i++) {
        cout << "\nDetails of Employee " << i + 1 << ":";
        emp[i].display();
    }

    return 0;
}
