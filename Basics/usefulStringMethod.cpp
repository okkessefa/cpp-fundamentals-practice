#include <iostream>


int main(){

    std::string name;   
    std::cout<<"Enter your name: ";
    std::getline(std::cin>>std::ws,name);
    std::cout<<"Your nickname is "<< name.insert(name.length(),"@gmail.com")<<std::endl;
    std::cout<<name.find("a")<<std::endl;
    std::cout<<name.erase(0,2);
        // string Userpassword;   
        // cout<<"Enter your password: ";
        // getline(cin>>ws,Userpassword);
    
    // if (name.empty())
    // {
    //     cout<<"You did not enter a value";
    // }else{
    //     cout<<"Hello "<<name;
    // }

    // if (Userpassword.length()<8 || Userpassword.length()>16)
    // {
    //     cout<<"Count of Password chracters must be in between 8-16 ";
    // }else
    // {
    //     cout<<"Password is valid";
    // }
    // if (Userpassword.empty())
    // {
    //     cout<<"Please enter a password";
    // }else
    // {
    //     cout<<"Now,You can enter the site";
    // }
    // Userpassword.clear() // clear the value and convert the space
    // Userpassword.append("@gmail.com"); //Append the string at the end of the value as a string
    // cout<<Userpassword.at(0); it gives to us the order of the value
    
    
    return 0;
}