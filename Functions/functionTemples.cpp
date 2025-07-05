#include <iostream>


template <typename T, typename U> 
// This is gives a benefit to usable for any data type
        // and help with this statement you do not have to write a lot of function that 
        // refer to one data type now one function refers all data types  

auto max(T x, U y)
{
    return(x > y) ? x : y;
} // but if you choose any spesific chracter it cause a non appearing error you can use auto key 

template <typename T, typename U > // you can continue to add alphabeth T U V W X Y Z
auto min(T x, U y)
{
    return(x < y) ? x : y;
}
int main()
{
    std::cout << "Max number is: "<< max(1, 8.1)<< "\n"; 
    std::cout << "Max number is: "<< max(8, 8.2)<< "\n"; 
    std::cout << "Max number is: "<< max(1, '1.1')<< "\n"; 
    std::cout << "Min number is: "<< min(1, 0.9)<< "\n"; 
    std::cout << "Min number is: "<< min(8.1, 8.2)<< "\n"; 
    std::cout << "Min number is: "<< min('8.1',8)<< "\n"; 
    return 0;
    
}
    
// this is old mothod
    
    // int max(int x, int y)
    // {
    //     return(x > y) ? x : y;
    // }
    // int min(int x, int y)
    // {
    //     return(x < y) ? x : y;
    // }
    
    // double min(double x, double y)
    // {
    //     return(x < y) ? x : y;
    // }
    // double max(double x, double y)
    // {
    //     return(x > y) ? x : y;
    // }
    
    // char min(char x, char y)
    // {
    //     return(x < y) ? x : y;
    // }
    // char max(char x, char y)
    // {
    //     return(x > y) ? x : y;
    // }