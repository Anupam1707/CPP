#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int elementToDelete;
    cout << "Enter the element to delete: ";
    cin >> elementToDelete;

    bool found = false;
    int indexToDelete = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == elementToDelete) {
            found = true;
            indexToDelete = i;
            break;
        }
    }

    if (found) {
        for (int i = indexToDelete; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Element deleted successfully." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
