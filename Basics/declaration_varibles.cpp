#include <iostream>

// int main(){

//     // int x; // declaration 
//     // x=5; // assigment
//     int x = 5; // declaration and assigment in one line
//     int y = 6;
//     int sum = x + y;

//     std::cout << x << "\n";
//     std::cout << y << "\n";
//     std::cout << sum <<"\n";

//     return 0;
// }

int main(){
    
    //integer value(whole number)
    int age = 5;
    int year = 2025;
    int days = 5;
    int work_days = 7.5; // if you declare a double as an integer , varible beehave as an integer.This is a worg way for declate decimal variable

    // std::cout << work_days ;
    
    // double (number including decimal)
    double price =10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // std::cout << price << "\n";
    // std::cout << gpa << "\n";
    // std::cout << temperature << "\n";

    // single charcter
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    //boolean (truw or false)
    bool power = true;
    bool  forSale = false;

    //string (object that represent s sequance text)
    std::string name1 = "Sefa";
    std::string day = "Friday";


    std::cout << "Hello " << name1 << '\n';
    std::cout << "You are " << age << " years old";
    
    return 0;
}