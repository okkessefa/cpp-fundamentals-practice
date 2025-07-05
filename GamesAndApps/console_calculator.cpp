#include <iostream>

int main(){

    using namespace std;

    char op;
    double number_1;
    double number_2;

    cout<<"****************** CALCULATOR ***********************"<<endl;
    cout<<"*****************************************************"<<endl;

    cout<<"Enter first number: ";
    cin>>number_1;

    cout<<"Choice the operator (+ - * /): ";
    cin>>op;

    cout<<"Enter second number: ";
    cin>>number_2;


    switch (op)
    {
    case '+':
        cout<< number_1 + number_2;
        break;
    case '-':
        cout<< number_1 - number_2;
        break;
    case '*':
        cout<< number_1 * number_2;
        break;
    case '/':
        cout<< number_1 / number_2;
        break;
    
    default:
        cout<<"That was not a valid respond";
        break;
    }


    return 0;
}