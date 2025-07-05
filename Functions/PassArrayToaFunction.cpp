#include <iostream>

using namespace std;

double getTotal(double prices[], int size);


int main(){

    double prices[] = {10.34 ,45.23, 82.99, 56.75};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); 
    cout<<"$"<<total<<endl;

    return 0;
}


double getTotal(double prices[], int size){
    double total = 0;
    for(int i; i<size; i++){
        total+=prices[i];
    }
    return total;
}


