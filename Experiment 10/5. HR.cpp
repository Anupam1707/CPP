#include <iostream>
using namespace std;

class Employee {

    int id;
    char name[20];

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Manager : public Employee {

    float salary;

public:
    void getData() {
        Employee::getData();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        Employee::display();
        cout << "Salary: " << salary << endl;
    }
};

class ProjectManager : public Manager {
private:
    int total_experience;
    int number_of_projects;

public:
    void getData() {
        Manager::getData();
        cout << "Enter Total Experience (in years): ";
        cin >> total_experience;
        cout << "Enter Number of Projects Handled: ";
        cin >> number_of_projects;
    }

    void display() {
        Manager::display();
        cout << "Total Experience: " << total_experience << " years" << endl;
        cout << "Number of Projects Handled: " << number_of_projects << endl;
    }
};

int main() {
    ProjectManager pm;
    pm.getData();
    cout << "\nProject Manager Details:" << endl;
    pm.display();
}
