/*
 * Name        : lab_14.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_14.h"

// CODE HERE -- FUNCTION DEFINITIONS
/*
 * Allocate memory for a dynamic array of integers.
 * @param unsigned int size - The desired size of the dynamic array
 * @return int* - A pointer to the newly allocated integer array
 */
int* MakeDynoIntArray(unsigned int size)
{
    int* array = new int[size];
    
    return array;
}

/*
 * Compute the sum of an array.
 * @param int* the_array - The array for which the sum will be computed
 * @param unsigned int array_size - The size of the_array
 * @return int - An integer containing the sum of the array
 * @throw The message "NULL ARRAY REFERENCE" if the_array is NULL
 *        Syntax: throw "The Message to throw";
 */
int Sum(int* the_array, unsigned int array_size)
{
    int sum = 0;
    
    for(int i = 0; i < array_size; i++)
    {
        sum += the_array[i];
    }
    if(array_size == 0)
    {
      throw "NULL ARRAY REFERENCE";  
    }
    else
    {
        return sum;
    }    
}

/*
 * Identify the max value in an array.
 * @param int* the_array - The array for which the max value will be identified
 * @param unsigned int array_size - The size of the_array
 * @return int - An integer containing the max value of the array
 * @throw The message "NULL ARRAY REFERENCE" if the_array is NULL
 *        Syntax: throw "The Message to throw";
 */
int Max(int* the_array, unsigned int array_size)
{
    int max = the_array[0];
    
    for(int i = 1; i < array_size; i++)
    {
        if(the_array[i] > max)
        {
            max = the_array[i];
        }
    }
    if(array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    else
    {
        return max;
    }
}

/*
 * Identify the min value in an array.
 * @param int* the_array - The array for which the min value will be identified
 * @param unsigned int array_size - The size of the_array
 * @return int - An integer containing the min value of the array
 * @throw The message "NULL ARRAY REFERENCE" if the_array is NULL
 *        Syntax: throw "The Message to throw";
 */
int Min(int* the_array, unsigned int array_size)
{
    int min = the_array[0];
    
    for(int i = 1; i < array_size; i++)
    {
        if(the_array[i] < min)
        {
            min = the_array[i];
        }
    }
     if(array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    else
    {
        return min;
    }
}