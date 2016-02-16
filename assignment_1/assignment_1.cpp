/*
 * Name        : Anthony Gonzales
 * Author      : FILL IN
 * Description : assignment_1
 * Sources     : FILL IN
 */

#include "assignment_1.h"

bool CheckAlphabetic(const string &someString)
{
    bool isAlphabetic;
    int stringSize = someString.size();
    char StringChar[100];
    int CheckTrue;
   
   if (someString == "")
   {
       isAlphabetic = false;
       return isAlphabetic;
   }
    else
    {
        for (int i = 0; i <= stringSize; i++)
        {
            StringChar[i] = someString[i];
        }
        
        int i = 0;
        
        while (StringChar[i] && CheckTrue != 0)
        {
            CheckTrue = isalpha(StringChar[i]);
            i++;
        }
        if (CheckTrue == 0)
        {
            isAlphabetic = false;
            return isAlphabetic;
        }
        else
            isAlphabetic = true;
            return isAlphabetic;
        
    }
}   

int CountWords(string CountString)
{
    int numSpaces;
    char someChar;
    int StringSize = CountString.length();
    
    if (CountString == "")                                                      //if strings empty returns 0
    {
        return 0;
    }
    
    for (int i = 0; i < StringSize; i++)
    {
        someChar = CountString.at(i);                                           // gets a character
		if (isspace(CountString[i]))                                            //counts number of spaces 
		{
			numSpaces++;
		}
    }
    
    return numSpaces + 1;                                                       //return with 1 added for the last word in the string
}

bool EncryptString(string &ThisString, int ShiftChar)
{
    string crypted = ThisString;
    bool isAlphabetic;
    int stringSize = ThisString.size();
    char StringChar[100];
    string someString = ThisString;

    isAlphabetic = CheckAlphabetic(someString);
    
    if (isAlphabetic == true)
    {
             for(int i = 0; i < stringSize; i++)
            {
                crypted[i] += ShiftChar;
            }  
            return isAlphabetic;
    }
    else
        return isAlphabetic;
            
    
    
   
}

bool DecryptString(string &StringCrypt, int CharShift)
{
    string crypted = StringCrypt;
    bool isAlphabetic;
    int stringSize = StringCrypt.size();
    char StringChar[100];
    string someString = StringCrypt;

    isAlphabetic = CheckAlphabetic(someString);
    
    if (isAlphabetic == true)
    {
             for(int i = 0; i < StringCrypt.length(); i++)
            {
                crypted[i] -= CharShift;
            }  
            return isAlphabetic;
    }
    else
        return isAlphabetic;
}

double ComputeAverage(double DubArray[], unsigned int ArraySize)
{
      double ArrayTotal;
      double Average;
      
      for (int i = 0; i < ArraySize; i++)
    {
        ArrayTotal = ArrayTotal + DubArray[i];
    }
    
    Average = ArrayTotal/ArraySize;
    
    return Average;
}

double FindMinValue(double DubArray[], unsigned int ArraySize)
{
     double minValue;
     
      for (int i = 0; i < ArraySize; i++)
    {
        if (DubArray[i] < minValue)
        {
            DubArray[i] = minValue;
        }
    }
    return minValue;
}
double FindMaxValue(double DubArray[], unsigned int ArraySize)
{
     double maxValue;
     
      for (int i = 0; i < ArraySize; i++)
    {
        if (DubArray[i] > maxValue)
        {
            DubArray[i] = maxValue;
        }
    }
    return maxValue;
}
/*
    int main()
    {
        cout << "testing...\n";
        
        string someString = "hello";
        bool checkAlpha = CheckAlphabetic(someString);
        cout << "Alpha: " << checkAlpha;
        
        
        int NumWords = CountWords("Hello this is a test");
        cout << "\nThere are " << NumWords << " words";
        
        string ThisString = "hello";
        bool isCrypted = EncryptString(ThisString, 1);
        cout << "\nEncryption: " << isCrypted;
        
            
        string StringCrypt = "h$ello";
        bool deCrypted = DecryptString(StringCrypt, 1);
        cout << "\nDecryption: " << deCrypted;
        
        double DubArray[5] = {1.2, 3.4, 4.9, 1.0, 4.0};
        double average = ComputeAverage(DubArray, 5);
        double minValue = FindMinValue(DubArray, 5);
        double maxValue = FindMaxValue(DubArray, 5);
        cout << "\nThe Average is " << average;
        cout << "\nThe min value is " << minValue;
        cout << "\nThe max value is " << maxValue;
        
    }
 */

// Write Function Definitions Here (What goes below main)
