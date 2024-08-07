#include <iostream>
using namespace std;

int main() {
    double amt, rate, gstamt, gst;

    cout << "Enter the amount: ";
    cin >> amt;

    cout << "Enter the GST rate (in percentage): ";
    cin >> rate;

    if (rate >= 0 && rate <= 28) {
        gst = amt * (rate / 100);
        gstamt = amt + gst;

        cout << "GST Amount: " << gst << endl;
        cout << "Total Amount: " << gstamt << endl;
    } else {
        cout << "Error: GST rate is out of valid range (0% to 28%)." << endl;
    }

    return 0;
}
