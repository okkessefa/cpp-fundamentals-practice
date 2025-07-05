#include <iostream>

int main(){
    
    using namespace std;

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand
    
    int temp;
    bool sunny=true;
    cout<<"Enter the temperature: ";
    cin>>temp;

    if (temp>20 && temp<30)
    {
        cout<<"Weather is good, why you are inside";
    }
    else  
    {
        cout<<"Weather is not good, You may spend time inside";
    }
    
    if (!sunny)
    {
        cout<<"It could be better if you take your umbralla";
    }
    else
    {
        cout<<"You should go picnic";
    }
        
    return 0;
}