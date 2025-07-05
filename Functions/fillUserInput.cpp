#include <iostream>

int main()
{
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i=0;i<size;i++)
    {
        std::cout<<"Please enter your meal of lunch break or press q for quit "<<std::endl;
        std::getline(std::cin, temp);
        if(temp == "q")
        {
            std::cout<<"You did not go to the refoctary "<<std::endl;
            break;
        }else
        {
            foods[i] = temp;
        }
    }

    for(int i = 0; !foods[i].empty(); i++)
    {
        std::cout<<"You ordered these thnigs:";
        std::cout<<'#'<<i+1<<": "<<foods[i]<<std::endl;
        std::cout<<"Excellent! Please take your receipt"<<std::endl;
    }

    return 0;
}