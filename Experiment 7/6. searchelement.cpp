#include <iostream>
using namespace std;
bool search_element(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    if (search_element(arr, size, key)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }
}
