#include <iostream>
#include <cmath>

int main(){

    using namespace std;

    double a;
    double b;
    double c;

    cout << "Enter side A :";
    cin >> a;
    cout << "Enter side B :";
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    cout << "C side is " << c; 
     
    return 0;
}

// int main(){

//     using namespace std;

//     double x = 3.14;
//     double y = 5;
//     double z;

//     z = max(x,y);
//     z = min(x,y);
//     z = pow(3,6);
//     z = sqrt(100);
//     z = abs(-16);
//     z = round(x);
//     // if you want to make different calculate search cmath website
//     cout << z;

//     return 0;
// }
