#include <iostream>
//about the based array
//This shortening type do shorting process like
//assume the first element 9 smallest elemnt is array then it start to 
//examine the smallest elemnt then find the 7 now 7 is the smallest elemnt  
// then skip the 5  now 5 is the smallest element in array it is going like that
// until finding the reel smallest element now array is 0,7,5,3,1,9,8,6,4,2
// now it is going to find  the 2. smallest element in array and it will select 
// 7 due to 0 is the already shorted end of the second step array is 
// looks like 0,1,5,3,7,9,8,6,4,2 . It is going that until 
//whole array will be sharted 
using namespace std;

void shortArray(int array[], int size);

int main()
{
    int array[] = {9,7,5,3,1,0,8,6,4,2};
    int size = sizeof(array) / sizeof(int);

    for(int element:array)
    {
        std::cout<<element<<" ";
    }
    cout<<endl;

    shortArray(array, size);
    for(int element:array)
    {
        std::cout<<element<<" ";
    }

    return 0;
}
void shortArray(int array[], int size)
{
    for(int i =0;i<size;i++)
    {
        int min_pos = i;
        for(int j = i+1; j<size;j++)
        {
            if(array[j] < array[min_pos])
            {
                min_pos = j;
            }
        }
        if(min_pos != i){
            int temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }
    }
}
