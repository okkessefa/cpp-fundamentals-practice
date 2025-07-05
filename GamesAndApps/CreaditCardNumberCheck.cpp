#include <iostream>


int getDigit(const int number);
int sumOddDigits(const std::string &cardNumber);
int sumEvenDigits(const std::string &cardNumber);

int main()
{
    
    std::string cardNumber;
    int result = 0;

    std::cout<<"Enter your creadit card number: "<<std::endl;
    std::cin>>cardNumber;

    result = sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);
    
    if(result%10==0)
    {
        std::cout<<cardNumber<<" is valid"<<std::endl;
    }else
    {
        std::cout<<cardNumber<<" is invalid"<<std::endl;

    }

    return 0;
}


int getDigit(const int number)
{   // example: number is 57
    return number % 10 + (number / 10 % 10);
}   //       7         +         5 

int sumOddDigits(const std::string &cardNumber)
{
    if (cardNumber.empty()) return 0;  // Handle empty input

    int sum = 0;
    for(int i = cardNumber.size() -1; i>=0 ; i-=2)
    {
        sum += (cardNumber[i] - '0');
    }
    return sum;
}

int sumEvenDigits(const std::string &cardNumber)
{
    if (cardNumber.empty()) return 0;  // Handle empty input

    int sum = 0;
    for(int i = cardNumber.size() -2 ; i>=0 ; i-=2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}


