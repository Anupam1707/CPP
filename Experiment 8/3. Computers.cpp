#include <iostream>
using namespace std;

struct Computer {
    char cpuType[20];
    int hardDiskSize;
};

int main() {
    Computer computers[50];
    for (int i = 0; i < 50; i++) {
        cin >> computers[i].cpuType >> computers[i].hardDiskSize;
    }
    for (int i = 0; i < 50; i++) {
        if (computers[i].hardDiskSize > 8) {
            cout << computers[i].cpuType << " " << computers[i].hardDiskSize << endl;
        }
    }
}
