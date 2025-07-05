#include <iostream>

using namespace std;

int Mynum = 3; // this is global scope
void PrintingNumber();

int main(){
    
    int Mynum =1; // this is local scope
    PrintingNumber();
    cout<<Mynum<<endl;

    // if you want to use global scope write :: before the varible
    cout<<::Mynum<<endl;


    return 0;
}

void PrintingNumber(){
    int Mynum = 2; // this is local scope
    cout<<Mynum<<endl;
} 