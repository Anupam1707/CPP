#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const int baseBill = 100;
    const int rate = 10;
    double unitsConsumed, billAmt, discountPercent, discountAmt, totalBill;
    cout << "Enter the Electrical Units Consumed : ";
    cin >> unitsConsumed;
    billAmt = baseBill + (unitsConsumed * rate);

    if (billAmt <= 200) discountPercent = 0;
    else if (billAmt > 200 && billAmt <= 500) discountPercent = 5;
    else if (billAmt > 500 && billAmt <= 800) discountPercent = 10;
    else if (billAmt > 800 && billAmt <= 1100) discountPercent = 15;
    else if (billAmt > 1100) discountPercent = 20;

    discountAmt = billAmt * (discountPercent / 100);
    totalBill = billAmt - discountAmt;

    cout << "Base Bill : " << baseBill << endl;
    cout << "Bill Amount (Before Discount) : " << billAmt << endl;
    cout << "Discount Percent : " << discountPercent << "%" << endl;
    cout << "Discount Amount : " << discountAmt << endl;
    cout << "Total Bill Amount (After Discount) : " << totalBill << endl;
}
