#include <iostream>

int main(){
    using namespace std;

    for(int i=0; i<10;i++){
        if(i%2==0){
            continue;
        }else{
            cout<<i<<" is odd number"<<endl;
        }
    }
    // for(int i=0; i<10;i++){
    //     if(i%2==0){
    //         cout<<i<<" is even number";
    //     }else{
    //         cout<<i<<" is odd number";
    //     }
    // }

    return 0;
}