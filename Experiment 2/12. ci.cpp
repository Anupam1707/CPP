#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double pamt, rate, time, num, ci;
    cout << "Enter the Principal Amount : ";
    cin >> pamt;
    cout << "Enter the Rate of Interest : ";
    cin >> rate;
    rate /= 100;
    cout << "Enter the Time Duration : ";
    cin >> time;
    cout << "Enter the Number of Times Interest is Compounded per Year : ";
    cin >> num;

    ci = pamt * pow(1 + (rate/num), num * time);
    cout << "the Compound Interest is : " << ci;
}
