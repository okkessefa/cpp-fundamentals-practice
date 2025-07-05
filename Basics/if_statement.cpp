#include <iostream>

int main(){

    using namespace std;

    int age;

    cout << "Enter Your age: ";
    cin>> age;

    if(age>70){
        cout<<"You are too old for getting lisance";
    }
    else if(age>=18){
        cout<<"You are able to get driving lisance";
    }
    else if(age<0){
        cout<<"You have not been born yet";
    }
    else{
        cout<<"You are not able to get driving";
    }
    return 0;
}