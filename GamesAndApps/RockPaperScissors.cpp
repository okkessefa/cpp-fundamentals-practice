#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){

    char player;
    char computer;

    srand(time(NULL));
    int num = (rand() % 3 ) + 1;

    player = getUserChoice();
    cout<<"Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout<<"Computer choice: ";
    showChoice(computer);

    chooseWinner(player,computer);


    return 0;
}

char getUserChoice(){
    
    char player;
    cout<<"Welcome To Rock Paper Scissors Game"<<endl;
    
    do{
        cout<<"Choice the One of the follawing"<<endl;
        cout<<"********************************"<<endl;
        cout<<"'r' for Rock"<<endl;
        cout<<"'p' for Paper"<<endl;
        cout<<"'s' for Scissors"<<endl;
        cout<<"---------->: ";
        cin>>player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    
    srand(time(0));
    int num = +rand() % 3  + 1;
    switch(num){
        case 1 : return 'r'; 
        case 2 : return 'p'; 
        case 3 : return 's'; 
    }
    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r' : cout<<"Rock"<<endl;
            break; 
        case 'p' : cout<<"Paper"<<endl;
            break; 
        case 's' : cout<<"Scissors"<<endl;
            break; 
    } 
}

void chooseWinner(char player, char computer){
    
    switch(player){
        case 'r':   if(computer=='r'){
                        cout<<"It is tie"<<endl;
                        break;
                    }
                    else if(computer=='p'){
                        cout<<"You lose"<<endl;
                        break;
                    }
                    else{
                        cout<<"You win"<<endl;
                        break;
                    }
        case 'p':   if(computer=='p'){
                        cout<<"It is tie"<<endl;
                        break;
                    }
                    else if(computer=='s'){
                        cout<<"You lose"<<endl;
                        break;
                    }
                    else{
                        cout<<"You win"<<endl;
                        break;
                    }
        case 's':   if(computer=='s'){
                        cout<<"It is tie"<<endl;
                        break;
                    }
                    else if(computer=='r'){
                        cout<<"You lose"<<endl;
                        break;
                    }
                    else{
                        cout<<"You win"<<endl;
                        break;
                    }
    }
}
