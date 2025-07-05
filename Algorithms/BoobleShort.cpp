#include <iostream>
//This shorting type doing shorting process like that
//  every time start the fisrt element and start to compare 
//  the other element for is graether then next when 
//  reach the max element it stop and retart 
//  the emanine to find from the first element if 
//  find any elemnt which is grather than next elememnts 
//  but still not replaed then restart to replacing process
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
    for(int i=0; i<size;i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j] < array[j+1])
            { 
                //this is increasing short
                // if you want to make decrasing short swap > with <
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}       