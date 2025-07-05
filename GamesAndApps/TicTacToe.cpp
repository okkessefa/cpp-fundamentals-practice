#include <iostream>
#include <ctime>

using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main(){
    char spaces[9] = {
        ' ',' ',' ',
        ' ',' ',' ',
        ' ',' ',' '
    };
    char player = 'X';
    char computer = 'O';
    bool running = true; 

    drawBoard(spaces);
    while(running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer))
        {
            running == false;
            break;
        }
        else if(checkTie(spaces))
        {
            running ==false;
            break;
        }

        computerMove(spaces,computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer))
        {
            running == false;
            break;
        }
        else if(checkTie(spaces))
        {
            running ==false;
            break;
        }
    }
    
    
    return 0;
}
void drawBoard(char *spaces)
{
    cout<<"*****************"<<endl;
    cout<<"     |     |     "<<endl;    
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"   "<<endl;    
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;    
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"   "<<endl;    
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;    
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"   "<<endl;    
    cout<<"     |     |     "<<endl;
    cout<<"*****************"<<endl; 
}
void playerMove(char *spaces, char player)
{
    int number;
    do{
        cout<<"Enter a spot to place a marker (1-9): ";
        cin>>number;
        number--;
        if(number >=0 && number <=9 && spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
    }while(true);
    
}
void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(0));

    do{
        number = rand() % 9;
        if(number >=0 && number <=9 && spaces[number] == ' ')
        {
            spaces [number] = computer;
            break;
        }
    }while(true);
}
bool checkWinner(char *spaces, char player, char computer){
     
    // {1,2,3}
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }

    // {4,5,6} 
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }
    
    // {7,8,9}
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }
    
    // {1,4,7}
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }
    
    // {2,5,8}
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }    

    // {3,6,9}
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }
        
    // {1,5,9}
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }    
    // {3,5,7}
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2]  == player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n"; 
    }    
        
    else return false;
   
    return true;
}
bool checkTie(char *spaces){
    for(int i=0; i <9 ; i++)
    {
        if(spaces[i] == ' ') return false;
    }
    cout<<"IT'S A TIE"<<endl;
    return true;
}
