#include <iostream>

class Animal
{
    public:
        bool alive = true;
    void eat()
    {
        std::cout<<"This creatures is eating"<<std::endl;
    }
};
class Dog : public Animal
{
    public:
    
    void bark()
    {
        std::cout<<"The dog goes woof!"<<std::endl;
    }
};
class Cat : public Animal
{
    public:

    void meow()
    {
        std::cout<<"THe cat goes meow!"<<std::endl;
    }
};



int main()
{

//inheritance = A class can redieve attributes and methods from another class    
//              Children classes inherit from a Parent class
//              Helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    std::cout<< dog.alive <<std::endl;
    std::cout<< cat.alive <<std::endl;

    dog.eat();
    dog.bark();
    cat.eat();
    cat.meow();


return 0;
}