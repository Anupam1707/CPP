#include <iostream>
using namespace std;

class Car {
private:
    char model[10];
    char brand[10];
    int year;
public:
    void start() {
        cout << brand << " has Started";
    }
    void stop() {
        cout << brand << " has Stopped";
    }
    void takeInput() {
        cout << "Enter the Model : ";
        cin >> model;
        cout << "Enter the Brand : ";
        cin >> brand;
        cout << "Enter the Year : ";
        cin >> year;
        cout << endl;
    }
    void display() {
        cout << "Model : " << model;
        cout << "Brand : " << brand;
        cout << "Year : " << year;
    }
};

int main() {
    Car bmw;
    bmw.takeInput();
    bmw.display();
    bmw.start();
    bmw.stop();
}
