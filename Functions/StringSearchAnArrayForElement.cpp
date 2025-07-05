#include <iostream>

int SearchArray(std::string array[],int size, std::string element);
int main(){

    std::string foods[] = {"banana","apple","melon","mango", "watermelon"};
    int size = sizeof(foods)/sizeof(std::string);
    int index;
    std::string myFood;

    std::cout<<"Enter a number for searching"<<std::endl;
    std::cin>>myFood;
    
    index = SearchArray(foods,size,myFood);
    if(index != -1){
        std::cout<<myFood<<" is at the "<< index+1<<"st roof."<<std::endl;
    }else{
        std::cout<<myFood<<" is not at the array";
    }

    // cout<<size;

    return 0;
}
int SearchArray(std::string array[],int size, std::string element){
    for(int i= 0; i<size;i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
