#include <iostream>

using namespace std;

// //way 1
// int temp = 1;
// int number;

// void factorial(int number);
// int main()
// {
//     cout<<"Enter a number to calculate its factoial: ";
//     cin>>number;
//     factorial(number);
    
//     cout<<temp;    
    
//     return 0;
// }

// void factorial(int number){
    
//     if(number>0)
//     {
//         temp *= number;
//         factorial(number - 1);
//         cout<<"I am working"<<endl; // JUST IN CASE
//     }
// }



int factorial(int num);
int main(){

    int number;
    cout<<"Enter a number to calculate factorial: ";
    cin>>number;
    cout<<"Result: "<<factorial(number);

    return 0;
}

int factorial(int num)
{
    if(num>1)
    {
        return num * factorial(num -1);
    }else
    {
        return 1;
    }
}
