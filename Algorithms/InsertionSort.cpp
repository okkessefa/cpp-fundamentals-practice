#include <iostream>
// about the based array
//This shortening type do shorting process like
// In the begining of the program it select fisrt element 4 and 
// start to examine the smallest elemnt if is not exist smallets element  
//skip the next element 6 again if is not next element 9 
// 9 is grather than 7 1 8 these numbers scoot over left side and 9 placed the 
// right side of the 8 
// this code works like that
void shortArray(int array[], int size);
int main()  
{
    int array[] = {4,6,9,3,7,1,8,10,5,2};
    int size = sizeof(array)/sizeof(int);

    shortArray(array, size);

    for(int element:array)
    {
        std::cout<<element<<" ";
    }
    return 0;
}
void shortArray(int array[], int size)
{
    for(int i = 1; i<size; i++)
    {
        int temp = array[i];
        int j = i-1;
        while(j>=0 && array[j] > temp)
        //this is increasing short
        // if you want to make decrasing short swap > with <
        {
            array[j+1] = array[j];
            j -= 1;
        }
        array[j+1] = temp;   
    }
}