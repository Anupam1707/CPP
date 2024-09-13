#include <iostream>
using namespace std;
int main() {
    int arr[4] = {1,2,3,4}, temp;
    cout <<"Original Array : ";
    for (int i = 0; i <4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    temp = arr[0];
    arr[0] = arr[3];
    arr[3] = temp;
    cout << "Modified Array : ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
}
