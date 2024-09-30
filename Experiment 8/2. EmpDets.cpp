#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    char name[50];
    char address[100];
    char dept[50];
    double salary;
};

int main() {
    Employee employees[10];
    
    for (int i = 0; i < 10; ++i) {
        cout << "Enter details for Employee " << (i + 1) << ":\n";
        cout << "Employee Number: ";
        cin >> employees[i].empNo;
        fflush(stdin);
        cout << "Name: ";
        cin.getline(employees[i].name, 50);
        cout << "Address: ";
        cin.getline(employees[i].address, 100);
        cout << "Department: ";
        cin.getline(employees[i].dept, 50);
        cout << "Salary: ";
        cin >> employees[i].salary;
        fflush(stdin);
    }

    cout << "\nEmployees with salary greater than 50000:\n";
    for (int i = 0; i < 10; ++i) {
        if (employees[i].salary > 50000) {
            cout << employees[i].name << endl;
        }
    }
}
