#include <iostream>

int main(){
    using namespace std;

    char unit;
    double temp;
    cout<<"**************Temperature Converter******************"<<endl;
    cout<<"F = Fahrenheit"<<endl;
    cout<<"C = Celcius"<<endl;
    cout<<"What unit would you like to convert to: ";
    cin>>unit;

    if (unit == 'F' || unit== 'f')
    {
        cout<<"Enter the temperature in Celcious: "<<endl;
        cin>>temp;

        temp = (1.8 * temp) + 32.0;
        cout<<"Temperature is :"<<temp;

    }else if(unit == 'C' || unit== 'c'){
        cout<<"Enter the temperature in Fahrenheit: "<<endl;
        cin>>temp;

        temp = (temp-32.0) / 1.8;
        cout<<"Temperature is :"<<temp;

    }else{
        cout<<"Please enter (F or C)"<<endl;
    }
    
    return 0;
}