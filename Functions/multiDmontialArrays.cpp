#include <iostream>

int main()
{   
    std::string stuffes[][3] = {
       {"votka", "vine", "absent"}, 
       {"pare", "strawberry", "melon"}, 
       {"water", "tea", "sprite"} 
    };
    
    int row = sizeof(stuffes)/sizeof(stuffes[0]);
    int column = sizeof(stuffes[0])/sizeof(stuffes[0][0]);

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<column; j++)
        {
            std::cout<<stuffes[i][j]<<" ";
        }
        std::cout<<'\n';
    }

    return 0;
}