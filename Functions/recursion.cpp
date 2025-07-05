#include <iostream>

using namespace std;

void walk(int steps);

int main(){
    
    walk(6);


    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step
    
    // (iterative vs recursive)
    
    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms
    
    // disadvantages = uses more memory
    //slower

    return 0;

}

//This is an iterative approach
// void walk(int steps){
//     for(int i = 0; i< steps; i++){
//         cout<<"You take a steps"<<endl;
//     }
// }

//this is a recursion approach
void walk(int steps){
    if(steps>0){
        cout<<"You take a steps"<<endl;
        walk(steps - 1);
    }
}
