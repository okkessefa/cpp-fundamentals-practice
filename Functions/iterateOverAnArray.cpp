#include <iostream>

using namespace std;

int main(){

    // string students[] = {"Sefa", "Ahmet", "Burak", "Merve"};
    // char grades[] = {'A','B','C','D','F'};
    
    // for(int i; i< sizeof(students)/sizeof(string); i++){
    //     cout<<students[i]<<endl;
    // }
    
    // for(int i; i< sizeof(grades)/sizeof(char); i++){
    //     cout<<grades[i]<<endl;
    // }


    //there is forach loop examples
    string students[] = {"Sefa", "Ahmet", "Burak", "Merve"};

    // for(string student: students){
    //     cout<<student<<endl;
    // }

    int grades[] ={54,23,86,88,86};
    for(int grade: grades){
        cout<<grade<<endl;
    }
    


    return 0;
}