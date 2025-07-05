    #include <iostream>

int main(){

    using namespace std;

    srand(time(NULL));

    int randomNumber = rand() % 20;
    int guess;
    int tries = 5;
    
    while(tries>0){

        cout<<"Enter your guess (1-20): ";
        cin>>guess;

        if(guess==randomNumber){
            cout<<"Good shot, the number was "<<guess;
            break;
        }
        else{
            tries-=1;
            if(tries>0){
                if(guess<randomNumber){
                    cout<<"increase your guess"<<endl;
                }else{
                    cout<<"dicrease your guess"<<endl;
                }
            }else{
                cout<<"Your creadit ran out"<<endl;
                cout<<" The Number was "<<randomNumber;
            }

        }
    }


    return 0;
}