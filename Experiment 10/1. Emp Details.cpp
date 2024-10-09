#include <iostream>
using namespace std;

class Employee {
private:
    int Emp_id;
    string Emp_name;
    float Emp_sal;

public:
    Employee(int id, string name, float salary) {
        Emp_id = id;
        Emp_name = name;
        Emp_sal = salary;
    }

    void display() {
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee Salary: " << Emp_sal << endl;
    }
};

int main() {
    Employee emp1(101, "John", 50000);
    Employee emp2(102, "Alice", 60000);

    cout << "Employee 1 details:" << endl;
    emp1.display();

    cout << "\nEmployee 2 details:" << endl;
    emp2.display();
}
