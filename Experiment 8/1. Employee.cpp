#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    char name[50];
    char address[100];
    char dept[50];
    double salary;
};

void readEmployee(Employee &emp) {
    cin >> emp.empNo;
    fflush(stdin);
    cin.getline(emp.name, 50);
    cin.getline(emp.address, 100);
    cin.getline(emp.dept, 50);
    cin >> emp.salary;
}

void displayEmployee(const Employee &emp) {
    cout << emp.empNo << endl;
    cout << emp.name << endl;
    cout << emp.address << endl;
    cout << emp.dept << endl;
    cout << emp.salary << endl;
}

int main() {
    Employee emp;
    readEmployee(emp);
    displayEmployee(emp);
}
