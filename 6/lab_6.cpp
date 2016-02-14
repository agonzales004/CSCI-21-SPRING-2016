/*
 * Name        : lab_6.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Arrays
 */

#include "lab_6.h"

// CODE HERE (FUNCTION DEFINITIONS)
/*
 * Create a string containing the contents of an array, each element separated
 * by a specified character. For example, if the array contents
 * are {1, 2, 3} and the separator character is ':', the string returned
 * will be "1:2:3".
 * @uses stringstream
 * @param int values[] - An array of integers
 * @param int size - The size of the integer array
 * @param char separator - The separator character to use in the returned
 *                         string.
  *                        Defaults to ','
 * @return string - A string containing the contents of values separated by the
 *                  specified separator character
 */
string PrepareForDisplay(int values[], int size, char separator)
{
  std::stringstream ss;
  ss.clear();
  ss.str();
  
  int i = 0;                                                                    //declare i outside of for loop to be used after the loop ends
  for(i = 0; i < size - 1; i++)                                                 //for loop used to run thorough array and put into ss               
  {
    ss << values[i] << separator;
  }
  
  ss << values[i];                                                              //last value outside of for loop to not have a seperator on it
  
  string someString;
  
  someString = ss.str();
  
  return someString;
  
    
    
    
}

/*
 * Test to see if an array contains a specified value.
 * @param int values -  An array of integers
 * @param int size - The size of the integer array
 * @param int value - The value to search for within the array
 * @return bool - true if value is found in the array, otherwise false
 */
bool HasValue(int values[], int size, int value)
{
    bool isValue = false;
    
    for (int i = 0; i < size; i++)                                              //for loop runs through every slot in array 
    {
        if (values[i] == value)                                                 //checks each slot to see if it matched the specified value
        {
            isValue = true;
        }
    }
    
    return isValue;
    
}

/*
 * Return the value from an array at a specified index.
 * @param int values -  An array of integers
 * @param int size - The size of the integer array
 * @param int index - The position in the array from which to return a value
 * @param bool &error - A flag that will be set to true if index is invalid for
 *                      the array, else it will be set to false
 * @return int - The value at the specified index in the array when error is set
 *               to false. if index is invalid, returns 0 and sets error to true
 */
int ValueAt(int values[], int size, int index, bool &error)
{
  if (index >= size)
  {
      error = true;
      return 0;
  }
  else
  {
      int someValue = values[index];
      error = false;
      return someValue;
  }
  
}

/*
 * Return the sum of the values in an integer array.
 * @param int values - An array of integers
 * @param int size - The size of the integer array
 * @return int - The sum of the values in the array
 */
int Sum(int values[], int size)
{
    int arraySum = 0;
    
     for (int i = 0; i < size; i++)
     {
         arraySum = values[i] + arraySum;
     }
     
     return arraySum;
}

/*
 * Swap the positions of two values in an integer array. The two
 * index values must be valid for the array.
 * @param int values - An array of integers
 * @param int size - The size of the integer array
 * @param int index1 - The position of the first value to be swapped
 * @param int index2 - The position of the second value to be swapped
 * @return bool - true if the swap was successful, otherwise false
 */
bool SwapValues(int values[], int size, int index1, int index2)
{
    int valueOne;
    int valueTwo;
    bool success;
    
   if (index1 < size && index2 < size && index1 >= 0 && index2 >= 0)
   {
        valueOne = values[index1];
        valueTwo = values[index2];
        
        values[index1] = valueTwo;
        values[index2] = valueOne;
        
        success = true;
   }
   else
   {
       success = false;
   }
   return success;
}

/* 
   int main()
    {
       int arrayValues [5] = {1, 2, 3, 4, 5};
       string displayArray;
       bool valuePresent;
       int sumOfArray;
       bool error;
       int theValue;
       bool swapped;
       
        displayArray = PrepareForDisplay(arrayValues, 5, ':');
        cout << displayArray;
        
        
        valuePresent = HasValue(arrayValues, 5 , 6);
        cout << "\nvalue present: " << valuePresent;
        
        theValue = ValueAt(arrayValues, 5, 3, error);
        cout << "\nThe Value: " << theValue;
        
       sumOfArray = Sum(arrayValues, 5);
       cout << "\nSum: " << sumOfArray;
       
       swapped = SwapValues(arrayValues, 5, 1, 5);
       cout << "\nSwapped: " << swapped;
    }
 */