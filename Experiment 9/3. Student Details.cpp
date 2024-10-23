#include <iostream>
using namespace std;

class Student {
private:
    char name[10];
    int rollno;
    float marks[3];
    float score;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks of 3 subjects: ";
        for(int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
        calculateScore();
    }

    void calculateScore() {
        score = (marks[0] + marks[1] + marks[2]) / 3;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Average Score: " << score << endl;
        if(score < 40) {
            cout << "Result: FAIL" << endl;
        } else {
            cout << "Result: PASS" << endl;
        }
    }
};

int main() {
    Student students[10];
    for(int i = 0; i < 10; i++) {
        students[i].getData();
    }

    for(int i = 0; i < 10; i++) {
        students[i].showData();
        cout << "------------------" << endl;
    }
}
