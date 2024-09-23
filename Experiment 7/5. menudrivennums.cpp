#include <iostream>
using namespace std;
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int reverse_number(int num) {
    int reversed_num = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return reversed_num;
}

int count_digits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Calculate sum of digits" << endl;
        cout << "2. Find reverse of a number" << endl;
        cout << "3. Count number of digits" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            int result = sum_of_digits(num);
            cout << "Sum of digits: " << result << endl;
        } else if (choice == 2) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            int result = reverse_number(num);
            cout << "Reversed number: " << result << endl;
        } else if (choice == 3) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            int result = count_digits(num);
            cout << "Number of digits: " << result << endl;
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
