/*
 * Name        : sorting.cpp
 * Author      : Anthony Gonzales
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
  int swaps = 0;
  int arraySize = (int)size;
  
 for(int i = arraySize - 1; i >= 1; i--)
 {   
    swaps++; 
     
   for(int j = 0; j < i; j++)
   {
    if(the_array[j]>the_array[j+1])
    {
      SwapValues(the_array[j], the_array[j+1]);
    }
   }
  }
  return swaps;
}

int OptimizedBubbleSort(int the_array[], unsigned int size)
{
     int swaps = 0;
     int arraySize = (int)size;
     
    for(int i = arraySize - 1; i >= 1; i--)
    {  
      swaps++;  
      bool flag = false;
       for(int j=0; j < i; j++)
       {
          if(the_array[j]>the_array[j+1])
          {
            flag = true;
            SwapValues(the_array[j+1], the_array[j]);
          }    
       }
    
     if(flag == false)
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
  int swaps = 0;
  int arraySize = (int)size;
  int h = size / 2;
  while(h > 0)
  {   
    swaps++;
    for(int i = h; i <= arraySize - 1; i++)
    { 
      int tmp = the_array[i];
      int j = i;
      while(j >= h && the_array[j -h] > tmp)
      {
        the_array[j] = the_array[j - h];
        j = j - h;
      }
      the_array[j] = tmp;
      DisplayArray(the_array);
    }
    h = h/2;
  }
  return swaps;
}

