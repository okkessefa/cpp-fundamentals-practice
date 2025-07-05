#include <iostream>

using namespace std;
int main()
{
    string  questions[] = 
    {
        "1. What year was C++ created? :",
        "2. Who invent C++? :",
        "3. What is the predecessor of C++? :",
        "4. What is your gender? :"
    };

    string options[][4] = 
    {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmak", "D. Mark Zuckerberg"},
        {"A. C", "B. C+", "C. C -- ", "D. B++"},
        {"A. Male", "B. Female", "C. I am mechanic", "D. Are you kiddng?"}
    };

    char asnwerKeys[] = {'C', 'B', 'A', 'C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i=0; i<size; i++)
    {
        cout<<"************************************"<<endl;
        cout<<questions[i]<<endl;
        cout<<"************************************"<<endl;

        for(int j =0; j< sizeof(options[i])/sizeof(options[0][i]); j++)
        {
            cout<<options[i][j]<<endl;
    
        }
        cout<<"Enter your guess: ";
        cin>>guess;
        guess = toupper(guess);

        if (guess ==asnwerKeys[i])
        {
            cout<<"COORECT"<<endl;
            score++;
        }else
        {
            cout<<"WRONG"<<endl;
            cout<<"Answer: "<<asnwerKeys[i]<<endl;
        }
        

    }
    cout<<"**********************************************"<<endl;
    cout<<"*                RESULTS                     *"<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"CORECT GUESSES :"<< score<<endl;
    cout<<"# of QUESTIONS :"<< size<<endl;
    cout<<"SCORE :"<< (score/(double)size)*100 <<endl;

    return 0;
}