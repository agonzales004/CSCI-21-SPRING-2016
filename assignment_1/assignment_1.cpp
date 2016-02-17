/*
 * Name        : Anthony Gonzales
 * Author      : 
 * Description : assignment_1
 * Sources     : Cplusplus.com, stackoverflow.com
 */

#include "assignment_1.h"

bool CheckAlphabetic(const string &someString)
{
    bool isAlphabetic;
    int stringSize = someString.size();
    char StringChar[100];
    int CheckTrue;
   
   if (someString == "")                                                        //if string is empty returns false
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
    int stringLength = crypted.length();
    ShiftChar %= 26;
    
    if (ShiftChar < 0)
    {
        ShiftChar = ShiftChar %26 + 26;                                         //add the 26 if the number to shift is a negative
    }
    

    isAlphabetic = CheckAlphabetic(crypted);
    
    
    if (isAlphabetic == true)
    {
             for(int i = 0; i < stringLength; i++)
            {
                for (int z = 0; z < ShiftChar; z++)
                {
                    if (ThisString[i] == 'z')                                   //Once loop reaches z lowercase z it will return to a
                    {
                        ThisString[i] = 'a';
                    }
                    else if (ThisString[i] == 'Z')                              //Once loop reaches an Uppercase Z it will return to A
                    {
                        ThisString[i] = 'A';
                    }
                    else
                        ThisString[i]++;
                }
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
    int stringLength = crypted.length();
    CharShift %= 26;
    
    if (CharShift < 0)
    {
        CharShift = CharShift %26 + 26;                                         //add the 26 if the number to shift is a negative
    }
    

    isAlphabetic = CheckAlphabetic(crypted);
    
    
    if (isAlphabetic == true)
    {
             for(int i = 0; i < stringLength; i++)
            {
                for (int z = 0; z < CharShift; z++)
                {
                    if (StringCrypt[i] == 'a')                                   //Once loop reaches a lowercase  it will return to z
                    {
                        StringCrypt[i] = 'z';
                    }
                    else if (StringCrypt[i] == 'A')                              //Once loop reaches an Uppercase A it will return to Z
                    {
                        StringCrypt[i] = 'Z';
                    }
                    else
                        StringCrypt[i]--;
                }
            }  
            return isAlphabetic;
    }
    else
        return isAlphabetic;
}

double ComputeAverage(double DubArray[], unsigned int ArraySize)
{
      double ArrayTotal = 0.0;                                                  //initialized to 0.0
      double Average;
     
     
      for (int i = 0; i < ArraySize; i++)
    {
        ArrayTotal = ArrayTotal + DubArray[i];
    }
    
    Average = ArrayTotal/ArraySize;                                             //adds the array values and divides them by the number of values
    
    if (ArrayTotal == 0.0)
    {
        return 0;
    }
    else
    {
        return Average;
    }
}

double FindMinValue(double DubArray[], unsigned int ArraySize)
{
     double minValue = 0;
     
      for (int i = 0; i < ArraySize; i++)                                       //if this array slot is smaller than minValue then this value becomes minValue
    {
        if (DubArray[i] < minValue)
        {
            minValue = DubArray[i];
        }
    }
    return minValue;
}
double FindMaxValue(double DubArray[], unsigned int ArraySize)
{
     double maxValue = 0;
     
      for (int i = 0; i < ArraySize; i++)
    {
        if (DubArray[i] > maxValue)                                             //if this array slot is bigger than maxValue then this value becomes maxValue
        {
            maxValue = DubArray[i];
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
