#include <iostream>

using namespace std;
// IF you do not use the & you just pass the value
//f you want to change the real value you have to use &
// this operator make that change thew memory address of value
// You can use this oparetorv eathier in function or display function
void swap(string &x, string &y);
    
int main()
{
    string x = "I am actually real x";
    string y = "I am actually real y";

    swap(x,y);
    cout<<"X: "<< &x <<endl;
    cout<<"Y: "<< &y <<endl;

    return 0;
}
void swap(string &x, string &y)
{
    // string temp;

    // temp = x;
    // x = y;
    // y = temp;
    cout<<"X: "<< &x <<endl;
    cout<<"Y: "<< &y <<endl;
}
