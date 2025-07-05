#include <iostream>

// cout << (insetion operator)
// cin >>  (extrection operator)



int main()
{

    std::string name;
    int age;

    // geline help for getting more than one character input 
    // and ws is for elimunite any white spaces or new line spaces 
    // use before user input, when you do this you can get and print varibles however you want
    std::cout<< "Hello what is your name?: ";
    std::getline(std::cin >>std::ws, name);
 
    std::cout<< "What is your age?: ";
    std::cin >> age;

    std::cout<< "Hello " << name <<"\n";
    std::cout<< name << " is " << age << " years old";

    return 0;
}
