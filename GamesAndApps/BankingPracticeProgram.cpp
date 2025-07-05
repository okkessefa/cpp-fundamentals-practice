#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance;
    int choice;
    do{

        cout<<"*******************************************"<<endl;
        cout<<"************** Enter your choice ***********"<<endl;
        cout<<"********************************************"<<endl;
        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;

        cin.clear();
        // fflush(stdin); //undefined behivor
        cin.ignore(numeric_limits<streamsize>::max(), '\n');


        switch(choice){
            case 1: 
                showBalance(balance);
            break;

            case 2: 
                balance += deposit();
                showBalance(balance);
            break;

            case 3: 
                balance -= withdraw(balance);
                showBalance(balance);
            break;

            case 4: 
                cout<<"Thank you7 for visiting"<<endl;
                break;
            default: 
                cout<<"Invalid Choice"<<endl;
                break;
        }


    }while(choice!=4);


    return 0;
}

void showBalance(double balance){
    cout<<"Your account balance is: $" << setprecision(2) << fixed << balance << endl;
}
double deposit(){
    double amount;
    cout<<"Enter amount to be deposited"<<endl;
    cin>>amount;
    if(amount > 0 ){
        return amount;
    } else{
        cout<<"That is invalid amount"<<endl; 
        return 0;
    }
        
}       
double withdraw(double balance){
    double amount;
    cout<<"Enter amount to be withdrawed: "<<endl;
    cin>>amount;
    if(amount > balance){
        cout<<"Insufficent funds"<<endl;
        return 0;
    }else if(amount<0){
        cout<<"That is invalid amount"<<endl;
        return 0;
    }else{
        return amount;
    }
}



