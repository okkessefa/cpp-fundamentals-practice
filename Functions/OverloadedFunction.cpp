#include <iostream>

using namespace std;

void OrderPizza(){
    cout<<"Here is your pizza"<<endl;
}

void OrderPizza(string topping1){
    cout<<"Here is your "<< topping1<<" pizza"<<endl;
}

void OrderPizza(string topping1,string topping2){
    cout<<"Here is your "<< topping1<< "and "<< topping2<<" pizza"<<endl;

}


int main(){

    // you can declare functingwith has same name 
    // there is the different: Each func has diffent type and count value 

    OrderPizza();
    OrderPizza("Mixed");
    OrderPizza("Pepperoni","Mashrooms");

    return 0;
}