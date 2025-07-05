#include <iostream>

// int main(){
//     // The const keyword specifies that a variable's value is constant
//     // tells the compiler to prevent anything from modifying it
//     // (read-only)

//     const double PI = 3.14159;
//     // PI = 420.69; if you do antything like that , you will see error of assigment of read-only variable
//     double radius = 10;
//     double circumferences = 2 * radius * PI;

//     std::cout << circumferences << " cm";

//     return 0;
// }

int main(){
    // You can define variables like that if you do not want to change this variable 
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDGHT = 1920;
    const int HIGHT = 1080; 

    return 0;
}