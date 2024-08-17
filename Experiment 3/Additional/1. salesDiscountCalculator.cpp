#include <iostream>
using namespace std;

int main() {
    double salesAmount, discount, amountAfterDiscount;
    cout << "Enter the sales amount : ";
    cin >> salesAmount;

    if (salesAmount > 5000) {
        discount = salesAmount * 0.12;
    } else {
        discount = salesAmount * 0.07;
    }

    amountAfterDiscount = salesAmount - discount;

    cout << "Total discount : " << discount << endl;
    cout << "Amount to be paid after discount : " << amountAfterDiscount << endl;
}
