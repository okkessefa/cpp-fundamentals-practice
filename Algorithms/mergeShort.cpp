#include <iostream> // Include input-output stream library for cout and cin

using namespace std; // Allows use of standard library functions without std::

/*
 * Function declarations
 * mergeSort() - Recursively divides the array into smaller subarrays
 * merge() - Merges two sorted subarrays into a single sorted array
 */
void merge(int array[], int left, int mid, int right);
void mergeSort(int array[], int left, int right);

int main()
{
    // Define and initialize an unsorted array
    int array[] = {2, 4, 6, 9, 8, 7, 1, 3, 5, 0};
    
    // Calculate the number of elements in the array
    int size = sizeof(array) / sizeof(array[0]);

    // Call mergeSort function to sort the array
    mergeSort(array, 0, size - 1);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for(int element : array){
        cout << element << " ";
    }
    
    return 0; // End the program successfully
}

/*
 * Recursive Merge Sort Function
 * Purpose: Recursively divides the array into halves, sorts them, and merges them.
 */
void mergeSort(int array[], int left, int right)
{
    if (left < right) // Base condition: If left is not less than right, the array is already sorted
    {
        int mid = left + (right - left) / 2; // Calculate middle index to split the array

        // Recursively call mergeSort to sort the left half
        mergeSort(array, left, mid);

        // Recursively call mergeSort to sort the right half
        mergeSort(array, mid + 1, right);

        // Merge the sorted left and right halves
        merge(array, left, mid, right);
    }
}

/*
 * Merge Function
 * Purpose: Merges two sorted subarrays into a single sorted array.
 */
void merge(int array[], int left, int mid, int right)
{
    // Calculate the size of the left and right subarrays
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    // Create temporary arrays to store left and right subarrays
    int leftArr[n1], rightArr[n2];

    // Copy elements from main array to leftArr
    for (int i = 0; i < n1; i++)
        leftArr[i] = array[left + i];

    // Copy elements from main array to rightArr
    for (int j = 0; j < n2; j++)
        rightArr[j] = array[mid + 1 + j];

    // Merge leftArr and rightArr back into the main array
    int i = 0, j = 0, k = left; // i -> left array, j -> right array, k -> main array index

    // Compare elements from both arrays and insert the smallest into the main array
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j]) // If leftArr[i] is smaller, insert it
        {
            array[k] = leftArr[i];
            i++; // Move to the next element in leftArr
        }
        else // If rightArr[j] is smaller, insert it
        {
            array[k] = rightArr[j];
            j++; // Move to the next element in rightArr
        }
        k++; // Move to the next position in the main array
    }

    // Copy any remaining elements from leftArr (if any)
    while (i < n1)
    {
        array[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy any remaining elements from rightArr (if any)
    while (j < n2)
    {
        array[k] = rightArr[j];
        j++;
        k++;
    }
}
