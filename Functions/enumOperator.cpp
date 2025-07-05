#include <iostream>

using namespace std;

int main()
{
    enum Day {
        monday = 0, tuesday = 1, wednesday = 2, thursday = 2, friday = 4, saturday = 5, sunday = 6 
    };

    Day today = friday;

    switch (today)
    {
    case 0:cout<<"Today is Monday";
        break;
    case 1: cout<<"Today is Tuesday";
        break;
    case 2: cout<<"Today is Wendesday";
        break;
    case 3: cout<<"Today is Thursday";
        break;
    case 4: cout<<"Today is Friday";
        break;
    case 5: cout<<"Today is Saturday";
        break;
    case 6: cout<<"Today is Sunday";
        break;
    }

    return 0;
}
