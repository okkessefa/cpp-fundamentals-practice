#include <iostream>



//if you want to return any value use the
// keyword (which you used before the declaring varible )before the creating func 

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}

int main(){

    double lenght = 5.0;
    double area = square(lenght);
    double volume = cube(lenght);

    std::cout<<"Area is "<< area <<"cm^2."<<std::endl;
    std::cout<<"Volume is "<< volume <<"cm^3."<<std::endl;

    return 0;
}