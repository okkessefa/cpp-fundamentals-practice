#include <iostream>

int main(){

    using namespace std;

    int rows;
    int columns;
    char symbol;

    cout<<"How many rows do you want?: ";
    cin>>rows;
    
    cout<<"How many column do you want?: ";
    cin>>columns;
    
    cout<<"Which symbol do you want?: ";
    cin>>symbol;

    //square or rectangle pattern
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=columns; j++){
    //         cout<<symbol;
    //     }
    //     cout<<"\n";
    // }

    // triangle right side
    // for(int i=1;i<=rows;i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<symbol;
    //     }cout<<endl;
    // }

    //pyramid
    // for(int i=0;i<rows;i++){
    //     //printing space
    //     for(int j=0;j<rows-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0; k<(2*i-1);k++){
    //         cout<<symbol;
    //     }
    //     cout<<endl;
    // }

    //Hallow square
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<columns;j++){
    //         if(i==0 || i==rows-1 || j==0 || j==columns-1){
    //             cout<<symbol<<" ";
    //         }else{
    //             cout<<"  ";
    //         }
        
    //     }
    //     cout<<endl;
    // }
    
    //diamond
    int n = 5;
    for(int i=0; i<n; i++){

        for(int j=0; j<n-i; j++){
            cout<<" ";
        }

        for(int k=0; k<(2*i-1); k++){
            cout<<symbol;
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){

        for(int j=0; j<n-i; j++){
            cout<<" ";
        }

        for(int k=0; k<(2*i-1); k++){
            cout<<symbol;
        }
        cout<<endl;
    }
    



    return 0;
}