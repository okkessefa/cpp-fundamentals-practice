#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void PrintCar(Car &car); 
void PrintCar(Car car, std::string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 1967;
    car1.color = "Blue";
    
    car2.model = "Toyota Corolla";
    car2.year = 2019;
    car2.color = "Black";
    
    PrintCar(car1, "silver");
    std::cout<<"*********************************************"<<std::endl;
    PrintCar(car2, "gold");
    std::cout<<"*********************************************"<<std::endl;
    std::cout<<"*********************************************"<<std::endl;
    
    PrintCar(car1);
    std::cout<<"*********************************************"<<std::endl;

    PrintCar(car2);

    return 0;

}
void PrintCar(Car &car)
{
    std::cout<< &car << std::endl;
    std::cout<< car.model << std::endl;
    std::cout<< car.year << std::endl;
    std::cout<< car.color << std::endl;

}
void PrintCar(Car car, std::string color)
{
    car.color = color;
}