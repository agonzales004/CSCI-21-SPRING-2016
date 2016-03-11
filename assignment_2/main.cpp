#include "account.h"
#include "account.cpp"
#include "savings_account.h"
#include "checking_account.h"
#include "credit_account.h"
#include <stdlib.h>

using namespace std;

void atm()
{
    Account my_account;
    SavingsAccount savings(0.7);                                                //create an instance of my derived classes
    CheckingAccount checking(2.3);
    CreditAccount credit(500.00);//parameter is credit debt
    
    bool exit_ = false;                                                         //variable to exit while loop
    
    while (exit_ == false)                                                      //loop for the whole thing while exit_ is equal to false
    {
        char choice;
        
        cout << "Welcome to the ATM, \nwould you like to make a transaction? y/n ";//main menu
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
                case 1:                                                         //savings account menu
                    system("clear");
                    cout << "Savings Account";
                    cout << "\n1. View Balanace\n2. Witdrawl\n3. Deposit\n4. Quit\n";
                    cin >> switch_quit;
                    
                    if(switch_quit == 1)
                    {
                        cout << "Savings Balance: $" << savings.view_balance() << "\n";
                    }
                    else if(switch_quit == 2)
                    {
                       double withdrawl_amount;
                       cout << "Enter the amount to withdrawl ($x.xx) "; 
                       cin >> withdrawl_amount;
                       savings.withdrawl(withdrawl_amount);
                    }
                    else if(switch_quit == 3)
                    {
                       double deposit_amount;
                       cout << "Enter the amount to deposit ($x.xx) "; 
                       cin >> deposit_amount;
                       savings.deposit(deposit_amount); 
                    }
                    else if(switch_quit == 4)
                    {
                       cout << savings.view_interest() << "%\n";
                    }
                    else if(switch_quit == 5)
                    {
                        exit_ = true;
                    }
                    else
                    {
                        cout << "Invalid choice";
                    }
                
                break;
                
                case 2:                                                         //checking account menu
                    system("clear");
                    cout << "Checking Account";
                    cout << "\n1. View Balanace\n2. Witdrawl\n3. Deposit\n4. View Interest Rate\n5. Quit";
                    cin >> switch_quit;
                    
                    if(switch_quit == 1)
                    {
                        cout << "Checking Balanace: $" << checking.view_balance() << "\n";
                    }
                    else if(switch_quit == 2)
                    {
                       double withdrawl_amount;
                       cout << "Enter the amount to withdrawl ($x.xx) "; 
                       cin >> withdrawl_amount;
                       checking.withdrawl(withdrawl_amount);
                    }
                    else if(switch_quit == 3)
                    {
                       double deposit_amount;
                       cout << "Enter the amount to deposit ($x.xx) "; 
                       cin >> deposit_amount;
                       checking.deposit(deposit_amount); 
                    }
                     else if(switch_quit == 4)
                    {
                       cout << checking.view_interest() << "%\n";
                    }
                    else if(switch_quit == 5)
                    {
                        exit_ = true;
                    }
                    else
                    {
                        cout << "Invalid choice";
                    }
                
                
                break;
                
                case 3:
                    system("clear");
                    cout << "Credit Account";
                    cout << "\n1. View charges\n2. Make payment\n3. Quit\n";    //credit menu
                    cin >> switch_quit;
                    
                    if(switch_quit == 1)
                    {
                        cout << "Credit Debt: $" << credit.view_limit() << "\n";// shows you your charges
                    }
                    else if(switch_quit == 2)
                    {
                       double payment_amount;
                       cout << "Enter the amount to pay ($x.xx) ";              //amount to pay on your charges
                       cin >> payment_amount;
                       credit.make_payment(payment_amount);
                    }
                    else if(switch_quit == 3)
                    {
                        exit_ = true;
                    }
                    else
                    {
                        cout << "Invalid choice";
                    }
                
                
                
                break;
                
                default:
                    cout << "Invalid Selection\n";
                    system("clear");
            }//end switch
        }//end if
    }//end while
    system("clear");
    cout << "\nThank you for using this ATM";
}

/*
int main()
{
    atm();
}
 */