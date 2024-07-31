#include <iostream>
using namespace std;
int main(){
    int pamt, rate, time, si;
    cout << "Enter the Principle Amount (Rs) : ";
    cin >> pamt;
    cout << "Enter the Rate of Interest (%) : ";
    cin >> rate;
    cout << "Enter the Time Duration (yrs) : ";
    cin >> time;
    si = (pamt * rate * time) / 100;
    cout << "\nFor the Principle Amount : " << pamt << "\nRate of Interest : " << rate << "\nTime Duration : " << endl;
    cout << "The Simple Interest (SI) is : " << si;
}
