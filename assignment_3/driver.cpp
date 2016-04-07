#include "box.cpp"

using namespace std;

void driver()
{
    Prize myPrize;
    Box myBox;   
    
    bool exit_ = false;                                                         //variable to exit while loop
    
    while (exit_ == false)                                                      //loop for the whole thing while exit_ is equal to false
    {
        cout << "Would you like to edit your box? y/n  ";
        
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
            int switch_choice;                                                      //variable to switch on
            
            cout << "Box Menu\n1. Add Prize\n2. Get Prize\n3. Remove Prize";
            cout << "\n4. Change Color\n5. Box Color";
            cout << "\nSelect Options 1-5 ";
            cin >> switch_choice;
            
            int switch_quit;
            string namePrize;
            int valuePrize;
        
        
            switch (switch_choice)
            {
                case 1:   
                    system("clear");
                    cout << "Enter a name for your prize: ";
                    cin >> namePrize;
                    cout << "\nWhat is the value of this prize?";
                    cin >> valuePrize;
                    
                    myPrize.setName(namePrize);
                    myPrize.setValue(valuePrize);
                    
                    //myBox.addPrize(myPrize);
                
                break;
                
                case 2:
                
                
                break;
                
                case 3:
                
                
                break;
                
                case 4:
                
                
                break;
                
                case 5:
                
                
                break;
                
                default:
                    cout << "Invalid Selection\n";
                    system("clear");
            }//end switch
        }//end if
        
    
    }//emd while
    
}//end driver()

int main()
{
    driver();
}