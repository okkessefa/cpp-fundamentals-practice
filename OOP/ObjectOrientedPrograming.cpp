#include <iostream>
using namespace std; 

class Human
{
    public:
        string name = "Sefa";
        string occupation = "Student";
        int age = 20;

        void eat()
        {
            cout<<"This person is eating"<<endl;
        }

        void drink()
        {
            cout<<"This person is drinking"<<endl;
        }
        void sleep()
        {
            cout<<"This person is sleeping"<<endl;
        }


};


int main()
{
    Human human1;
    Human human2;

    // human1.name = "Sefa"; 
    // human1.occupation = "Student"; 
    // human1.age = 20; 
    
    // human2.name = "Ahmet"; 
    // human2.occupation = "Student"; 
    // human2.age = 15;
    
    
    cout<<human1.name<<endl;
    cout<<human1.occupation<<endl;
    cout<<human1.age<<endl;
    human1.eat();
    human1.drink();
    
    cout<<human2.name<<endl;
    cout<<human2.occupation<<endl;
    cout<<human2.age<<endl;
    human2.sleep();


    return 0;
}