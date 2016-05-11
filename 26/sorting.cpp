/*
 * Name        : sorting.cpp
 * Author      : FILL IN
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS

void SwapValues(int &value_1, int &value_2) {
  // DO NOT ALTER THE NEXT 3 LINES!!!
  if (GRADER) {
    cout << value_1 << " " << value_2 << endl;
  }
  // Code SWAP Algorithm Here
  int temp = value_1;
  value_1 = value_2;
  value_2 = temp;
}

int BubbleSort(int the_array[], unsigned int size)
{
    int j;
    int swaps = -1;
    int arraySize = (int)size;
  
    for (int i = 0; i < arraySize; i++)
    {
        swaps++;
        
        for (j = i + 1; j < arraySize; j++)
        {
            if (the_array[j] < the_array[i])
            {
                SwapValues(the_array[i], the_array[j]);
            }
        }    
    }
  return swaps;
}

int OptimizedBubbleSort(int the_array[], unsigned int size)
{
     int swaps = 0;
     int arraySize = (int)size;
     
    for(int i=0; i<arraySize; i++)
    {  
      swaps++;  
      bool flag = false;
       for(int j=0; j<arraySize-i-1; j++)
       {
          if(the_array[j]>the_array[j+1])
          {
            flag = true;
            SwapValues(the_array[j+1], the_array[j]);
          }    
       }
    
     if(!flag)
     {
         break;
     }
   }
    return swaps;
    
}

int SelectionSort(int the_array[], unsigned int size)
{
  int i, j, minIndex;
  int swaps = 1;
  int arraySize = (int)size;
  
      for (i = 0; i < arraySize - 1; i++) 
      {
           swaps++;
            minIndex = i;
            for (j = i + 1; j < arraySize; j++)
                  if (the_array[j] < the_array[minIndex])
                        minIndex = j;
            if (minIndex != i) 
            {
                  SwapValues(the_array[i], the_array[minIndex]);
            }
      }
      
      return swaps;
}

int InsertionSort(int the_array[], unsigned int size)
{
  int j;
  int arraySize = (int)size;
  int swaps = 0;
		
	for (int i = 0; i < arraySize; i++){
		j = i;
		swaps++;
		
		while (j > 0 && the_array[j] < the_array[j-1])
		{
			SwapValues(the_array[j], the_array[j-1]);
			j--;
		}
	}
     
     return swaps;
}

int ShellSort(int the_array[], unsigned int size)
{
  int gap, j;
  int arraySize = (int)size;
  int swaps = 0;

    for (gap = arraySize/2; gap > 0; gap /= 2)
    {
        swaps++;
        for (int i = gap; i < arraySize; i++)
        {
            for (j=i-gap; j>=0 && the_array[j]>the_array[j+gap]; j-=gap) 
            {
                SwapValues(the_array[j], the_array[j+gap]);
            }
        }    
    }  
     
    return swaps;
}

