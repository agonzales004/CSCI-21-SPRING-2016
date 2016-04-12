#include "DLList.h"



using namespace std;

void driver()
{
    bool exit_ = false;
    
    while(exit_ == false)
    {
        cout << "Welcome to musical chairs\nWould you like to play? y/n ";
        
        char choice;
            
        cin >> choice;
            
        if(choice == 'N' || choice == 'n')
        {
            exit_ = true;
        }
        else if(choice == 'Y' || choice == 'y')
        {
            system("clear");
        }
        else
        {
            cout << "\nInvalid Selection\n";
        }
        
        if(choice == 'Y' || choice == 'y')
        {
           string line;
           ifstream myFile;
           myFile.open("a3input.txt");  
           
           if (myFile.is_open())
           {
             
             while ( getline (myFile,line) )
             {
               cout << line << '\n';
             }
            myFile.close();
           }
           else
           { 
             cout << "Unable to open file";
           }     
        }
    }//end while
}//end driver function

int main()
{
    driver();
}