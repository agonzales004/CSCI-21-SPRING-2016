/*
 * Name        : lab_5.cpp
 * Author      : Anthony Gonzales
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)
void Hello()
{
    cout << "Hello world!";
}

void PrintMessage(string Somestring)
{
    cout << Somestring;
}

int GetAnswer()
{
    int value = 42;
    return value;
}

int FindLarger(int FirstValue, int SecondValue)
{
    if(FirstValue >= SecondValue)
    {
        return FirstValue;
    }
    else
        return SecondValue;
}

string BuildMessage(string someMessage, bool someBool)
{
    std::stringstream ss;
    ss.clear();
    ss.str();
    
    string label = "Message";
    char separator = ':';
    string message = someMessage;
    string someString;
    
    if(message == "")
    {
        message = "empty";
        ss << label << separator << " " << message;
        someString = ss.str();
        return someString;
    }
   else if(someBool == false)
    {
        ss << label << separator << " " << message;
        someString = ss.str();
        return someString;
    }
    else if(someBool == true)
    {
       for(int i = 0; i < someMessage.size(); i++)
       {
           someMessage.at(i) = toupper(someMessage.at(i));
       }
        ss << label << separator << " " << someMessage;
        someString = ss.str();
        return someString;
    }
   
}

/*
    int main()
    {
        Hello();
        PrintMessage("Hello");
        GetAnswer();
        int largerNumber = FindLarger(20, 10);
        cout << largerNumber;
        string myMessage = BuildMessage();
        cout << myMessage;
    }
 */