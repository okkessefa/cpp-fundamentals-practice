#include <iostream>

// You may choose either READABLE or WRITEABLE attribute or both 
class Stoven
{
private:
    // This usage supplies private usage and 
    // our variables cannot be changed by anyone except you
    int temperature = 0;

public:
    Stoven(int temperature)
    {
        setTemperature(temperature);   
    }

    // This usage allows users to make changes to variables

    // getter = function that makes a private attribute READABLE
    int getTemperature() 
    {
        return temperature;
    }

    // setter = function that makes a private attribute WRITEABLE
    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE
    Stoven stove(6);

    // stove.getTemperature() -> this usage is not available 
    // since we changed the class variables’ access specifier 
    // from public to private now:
    // stove.setTemperature(-12345678);

    std::cout << "The temperature is " << stove.getTemperature() << std::endl;

    return 0;
}
