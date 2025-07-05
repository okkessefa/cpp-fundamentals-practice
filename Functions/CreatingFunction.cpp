#include <iostream>

using namespace std; 

void SayHappyBirthday(string name, int age){
    cout<<"Happy Birthday "<<name<<endl;
    cout<<"You are "<<age<<" years old now!"<<endl;
}

int main(){

    string name = "Sefa";
    int age = 19;

    SayHappyBirthday(name,age);

    return 0;
}