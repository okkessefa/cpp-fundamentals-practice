#include <iostream>

int main(){

    using namespace std;
    // string name;
    
    // while (name.empty())
    // {
    //     cout<<"ENter yuor name";
    //     getline(cin,name);
    // }
    
    // cout<<"Hello "<<name;
    int number;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
    }while(number<=0);

    cout<<"This is a piaitice number: "<<number;
    

    return 0;
}