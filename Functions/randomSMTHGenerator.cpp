#include <iostream>
#include <ctime>

int main(){
    //psuedo-random = NOT truly random ( but close)
    using namespace std;
    // srand(time(NULL));

    // int num1 = (rand() % 6) + 1;    
    // int num2 = (rand() % 6) + 1;
    // int num3 = (rand() % 6) + 1;    

    // cout<<num1<<endl;    
    // cout<<num2<<endl;
    // cout<<num3<<endl;

    srand(time(0));
    int randomNumber = (rand() % 5) + 1;

    switch(randomNumber){
        case 1:
            cout<<"You win a poteto generation"<<endl;
            break;
        case 2:
            cout<<"You win a honey bootle generation"<<endl;
            break;
        case 3:
            cout<<"You win a golden apple generation"<<endl;
            break;
        case 4:
            cout<<"You win a enchanted apple generation"<<endl;
            break;
        case 5:
            cout<<"You win a health generation"<<endl;
            break;
    }

    // cout<<rand();
    return 0;
}