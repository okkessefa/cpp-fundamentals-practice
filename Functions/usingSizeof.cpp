#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a:
    // variable, data type, class, objects, etc.
    std :: string name = "Bro Code";
    double gpa = 2.5;
    char grade = 'F';
    // bool student = true;
    char grades [ ] = {'A', 'B', 'C' , 'D' ,'F'};
    std::string student[] = {"Sefa","Ahmet","Burak"};

    // std :: cout << sizeof(grades)/sizeof(char) << " elements\n"; // gives the count of the element
    std :: cout << sizeof(student)/sizeof(std::string) << " elements\n";




    return 0;
}