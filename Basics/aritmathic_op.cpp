#include <iostream>
#include <vector>

using number_t = int ;
using namespace std;
int main(){
    
    number_t student = 20;

    // student += 5;
    //if you increment by one 
    // student++;

    // student-=5; 
    // student--;

    // student*=2;

    // student/=2;

    //student = 20
    // student/=3;
    // if you this, decimal part of result be ignored
    // if you change the int with double , you can get decimal result

    // if you do this, In the process of dividing, you find the remainder 
    number_t remainder = student % 2;

    cout << remainder;

    return 0;
}