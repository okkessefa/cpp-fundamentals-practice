#include <iostream>


int SearchArray(int array[],int size, int element);
int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;

    std::cout<<"Enter a number for searching"<<std::endl;
    std::cin>>myNum;
    
    index = SearchArray(numbers,size,myNum);
    if(index != -1){
        std::cout<<myNum<<" is at the "<< index+1<<"st index."<<std::endl;
    }else{
        std::cout<<myNum<<" is not at the array";
    }

    // cout<<size;

    return 0;
}
int SearchArray(int array[],int size, int element){
    for(int i; i<size;i++){
        if(array[i]== element){
            return i;
        }
    }
    return -1;
}
