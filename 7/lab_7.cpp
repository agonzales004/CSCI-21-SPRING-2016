/*
 * Name        : lab_7.cpp
 * Author      : FILL IN
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()

/*
 * Open and read the contents of a text file. Each line of the
 * file will contain a single integer of possible values 10, 20,
 * 30, 40, or 50. Perform the following operations on the input values:
 *   10 -- invoke the function OnTen
 *   20 -- invoke the function OnTwenty
 *   30 -- invoke the function OnThirty
 *   40 -- invoke the function OnForty
 *   50 -- invoke the function OnFifty
 *   any other value -- invoke the function OnError
 * DON'T FORGET TO CLOSE YOUR FILE BEFORE YOUR FUNCTION ENDS!!!
 * @param string filename - A string containing the name of the file to
 *                          be processed
 * @return bool - True if filename was successfully opened and processed,
 *                else false
 */
bool ProcessFile(string filename)
{
   string line;
   ifstream myFile;
   myFile.open(filename.c_str());
   
   if (myFile.is_open())
   {
       while (getline(myFile, line))
       {
          if (line == "10")
          {
              OnTen();
          }
          else if (line == "20")
          {
              OnTwenty();
          }
          else if (line == "30")
          {
              OnThirty();
          }
          else if (line == "40")
          {
              OnForty();
          }
          else if (line == "50")
          {
              OnFifty();
          }
          else
          {
              OnError();
          }
       }
       myFile.close();
       
       return true;
   }
   else
   {
       return false;
   }
}
/*
 * Process the argv array (command-line arguments to the program). Ignore
 * argv[0] as that is the program name. Perform the following operations on
 * the input values:
 *   10 -- invoke the function OnTen
 *   20 -- invoke the function OnTwenty
 *   30 -- invoke the function OnThirty
 *   40 -- invoke the function OnForty
 *   50 -- invoke the function OnFifty
 *   any other value -- invoke the function OnError
 * @param int argc - Contains the number of arguments passed to the program
 *                   on the command-line
 * @param char *argv[] - An array containing the command-line arguments
 */
void ProcessArguments(int argc, char* argv[])
{
    string argument;
    
  for (int i = 1; i < argc; i++)
  {
      argument = argv[i];
      
      if (argument == "10")
      {
          OnTen();
      }
      else if(argument == "20")
      {
          OnTwenty();
      }
       else if(argument == "30")
      {
          OnThirty();
      }
       else if(argument == "40")
      {
          OnForty();
      }
       else if(argument == "50")
      {
          OnFifty();
      }
      else
      {
          OnError();
      }
      
  }
    
}

/*
    int main()
    {
        ProcessFile("lab_7_input.txt");
        
    }
 */