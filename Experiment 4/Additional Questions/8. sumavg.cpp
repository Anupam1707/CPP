#include <iostream>
using namespace std;

int main() {
    int num, count = 0, max = -2147483648, min = 2147483647, sum = 0;
    cout << "Enter positive integers (terminate with -1): " << endl;
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        if (num > 0) {
            count++;
            sum += num;
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }
    if (count > 0) {
        cout << "Count: " << count << endl;
        cout << "Maximum: " << max << endl;
        cout << "Minimum: " << min << endl;
        cout << "Average: " << (double)sum / count << endl;
    } else {
        cout << "No positive integers were entered." << endl;
    }
}
