#include <iostream>
#include <vector>
    // typedef = reserved keyword used to create an additional name
    //      (alias) for another data type.
    //      New identifier for an existing type
    //      Helps with readability and reduces typos

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//     pairlist_t pairlist;


// typedef std::string text_t;
using text_t = std::string;

// typedef int number_t;
using number_t = int;

using namespace std;

int main(){


    text_t fisrtName = "Sefa";
    string job = "Engineer";
    number_t age = 19;

    cout << fisrtName << " is a " << job << '\n';
    cout << fisrtName << " is " << age << " years old" << '\n';



    return 0;
}