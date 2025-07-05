#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};


int main() {

    // overloaded constructors = multiple constructors w/ same name but different parameters
    //                          allows for varying arguments when instantiating an object
    Pizza pizza1;
    Pizza pizza2("Pepperoni");
    Pizza pizza3("Mashroom","Mixed");

    std::cout<<pizza2.topping1<<std::endl;
    std::cout<<pizza3.topping1<<" "<<pizza3.topping2<<std::endl;

    return 0;
}