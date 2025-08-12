#include <iostream>
#include <fstream>


int main()
{
    // std::fstream myFile;
    
    // myFile.open("Work.txt", std::ios::out); // Writing mode
    // if(myFile.is_open())
    // {
    //     myFile << "Hello\n";
    //     myFile << "I am working and this is second line\n";
    //     myFile.close();
    // }

    //myFile.open("Work.txt", std::ios::out); // over write 
    //if(myFile.is_open())
    //{
    //    myFile << "Hello again \n";
    //    myFile << "I am working still in this line\n";
    //    myFile.close();
    //}

    // myFile.open("Work.txt", std::ios::app); // append mode write 
    // if(myFile.is_open())
    // {
    //     myFile << "Hello again \n";
    //     myFile << "I am working still in this line\n";
    //     myFile.close();
    // }
    std::fstream myFile;
    myFile.open("Work.txt", std::ios::in); // read mode
    if(myFile.is_open())
    {
        std::string line;
        while(std::getline(myFile ,line))
        {
            std::cout<< line << std::endl;
        }
        myFile.close();
    }
    else{
        throw std::runtime_error("Failed to open file");
    }

    return 0;
}
/*
    

*/