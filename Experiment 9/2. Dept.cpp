#include <iostream>
using namespace std;

class Employee {
private:
    char name[20];
    float salary;
    char department[20];
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
