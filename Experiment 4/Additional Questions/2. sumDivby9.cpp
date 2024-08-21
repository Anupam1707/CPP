#include <iostream>
using namespace std;

int main() {
    int count = 0, sum = 0;

    for (int i = 100; i <= 200; ++i) {
        if (i % 9 == 0) {
            count++;
            sum += i;
        }
    }

    cout << "Count of numbers divisible by 9: " << count << endl;
    cout << "Sum of numbers divisible by 9: " << sum << endl;
}
