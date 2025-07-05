#include <iostream>
#include <typeinfo>

// type conversion = conversion a value of one data type to another
//      Implicit = automatic
//      Explicit = Prepede value with new data type (int)

int main(){

    // you want to store any value as a diffenrent type except already defined type
    double x = (int) 3.14;
    std::cout<< typeid(x).name() << std::endl;
    std::cout<< x ;

    // according to ASCII 
    // char x = 100;

    // std::cout<< (char)100;
    int correct = 8;
    int question = 10;
    double score =correct / (double)question * 100; 

    // std::cout<< score << " %";

    return 0; 
}