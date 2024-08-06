#include <iostream>
#include <cmath>
using namespace std;
int main(){
   double s1, s2, s3, s, area;
   cout << "Enter the First Side : ";
   cin >> s1;
   cout << "Enter the Second Side : ";
   cin >> s2;
   cout << "Enter the Third Side : ";
   cin >> s3;

   if ((s1 + s2 < s3) or (s2 + s3 < s1) or (s1 + s3 < s2)) {
       cout << "The given Triangle is Valid." << endl;
       s = (s1 + s2 + s3) / 2;
       area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
       cout << area;
    }
    else {
        cout << "The given Triangle is Invalid.";
    }
}
