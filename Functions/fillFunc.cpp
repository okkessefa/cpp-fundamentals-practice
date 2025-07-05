#include <iostream>


int main()
{   
    // fill() = Fills a range of elements with a specified value
    // fill(begin, end, value);

    const int SIZE = 10;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "c++");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "python");
    fill(foods + (SIZE/3)*2, foods + SIZE, "java");

    for(std :: string food : foods)
    {
        std::cout << food << '\n' ;
    }
    return 0;
}
