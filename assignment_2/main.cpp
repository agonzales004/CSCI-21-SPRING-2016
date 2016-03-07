#include "account.h"
#include "account.cpp"
#include "savings_account.h"
#include "savings_account.cpp"
#include "checking_account.h"
#include "checking_account.cpp"
#include "credit_account.h"
#include "credit_account.cpp"
#include <stdlib.h>

using namespace std;

void atm()
{
    Account my_account;
    SavingsAccount my_savings;
    CheckingAccount my_checking;
    CreditAccount my_credit;
    
    bool exit_ = false;
    
    while (exit_ == false)                                                      //loop for the whole thing while exit_ is equal to false
    {
        char choice;
        
        cout << "Welcome to the ATM, \nwould you like to make a transaction? y/n ";
        cin >> choice;
        
        if (choice == 'n' || choice == 'N')
        {
            exit_ = true;
        }
        else if (choice == 'y' || choice == 'Y')
        {
            system("clear");
        }
        else
        {
            cout << "Invalid Selection\n";
        }
        
        if (choice == 'y' || choice == 'Y')
        {   
           
            int switch_choice;                                                      //variable to switch on
            
            cout << "ATM Menu\n1. Savings Account\n2. Checking Acount\n3. Credit Account";
            cout << "\nWhich Account do you choose? ";
            cin >> switch_choice;
            
            int switch_quit;
        
        
            switch (switch_choice)
            {
                case 1:
                    system("clear");
                    cout << "Savings Account";
                    cout << "\n1. View Balanace\n2. Witdrawl\n3. Deposit\n4. Quit\n";
                    cin >> switch_quit;
                    
                    if(switch_quit == 1)
                    {
                        cout << "$" << my_savings.view_balance() << "\n";
                    }
                    else if(switch_quit == 2)
                    {
                       double withdrawl_amount;
                       cout << "Enter the amount to withdrawl ($x.xx) "; 
                       cin >> withdrawl_amount;
                       my_savings.withdrawl(withdrawl_amount);
                    }
                    else if(switch_quit == 3)
                    {
                       double deposit_amount;
                       cout << "Enter the amount to deposit ($x.xx) "; 
                       cin >> deposit_amount;
                       my_savings.deposit(deposit_amount); 
                    }
                    else if(switch_quit == 4)
                    {
                        exit_ = true;
                    }
                    else
                    {
                        cout << "Invalid choice";
                    }
                
                break;
                
                case 2:
                    cout << "  **Checking Account**  ";
                    cout << "1. View Balanace\n2. Witdrawl\n 3. Deposit";
                
                break;
                
                case 3:
                    cout << "  **Credit Account**  ";
                    cout << "1. View Balanace\n2. Witdrawl\n 3. Deposit";
                
                break;
                
                default:
                    cout << "Invalid Selection\n";
                    system("clear");
            }//end switch
        }//end if
    }
}

int main()
{
    atm();
}