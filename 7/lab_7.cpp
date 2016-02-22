/*
 * Name        : lab_7.cpp
 * Author      : Anthony Gonzales
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
   myFile.open(filename.c_str());                                               //open given fiile 
   
   if (myFile.is_open())
   {
       while (getline(myFile, line))                                            //loops  throush every line
       {
          if (line == "10")                                                     //if line contains some number invoke appropriate function
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
          else                                                                  //if number isnt present invoke onError
          {
              OnError();
          }
       }
       myFile.close();                                                          //close file
       
       return true;
   }
   else                                                                         //if fiie is unable to open return false
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
    string argument;                                                            //variable to store the array item in
    
  for (int i = 1; i < argc; i++)
  {
      argument = argv[i];                                                       //cycles through each slot and stores it in the variable
      
      if (argument == "10")                                                     //compares each item to see if there is a match to 10, 20, 30, 40, 50
      {                                                                         //then invokes proper function if there is a match
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