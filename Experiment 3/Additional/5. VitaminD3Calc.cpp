#include <iostream>
using namespace std;
int main() {
    double vitaminD3;
    cout << "Enter Vitamin D3 level (in nm/mL): ";
    cin >> vitaminD3;
    if (vitaminD3 < 20) {
        cout << "Status: Deficiency" << endl;
    } else if (vitaminD3 >= 20 && vitaminD3 <= 30) {
        cout << "Status: Insufficiency" << endl;
    } else if (vitaminD3 > 30 && vitaminD3 <= 100) {
        cout << "Status: Sufficiency" << endl;
    } else if (vitaminD3 > 100) {
        cout << "Status: Toxicity" << endl;
    } else {
        cout << "Invalid value entered." << endl;
    }
}
