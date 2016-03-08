#include "checking_account.h"
 
 CheckingAccount::CheckingAccount(string name, double balance)
                : Account(name),
                  checking_balance_(balance)
                  {
                   
                  }
  
  /*
   * Accessor for balance_
   * @return double - The checking_balance_ value
   */
  double CheckingAccount::view_balance() const
  {
   return checking_balance_;
  }

  /*
   * Mutator for name_
   * @param string name - The string to set name_ to
   */
  void CheckingAccount::set_name(string name)
  {
   
  }

  /*
   * Mutator for balance_
   * @param double value - The value to set double_ to
   */
  void CheckingAccount::set_balance(double balance)
  {
   
  }
  
  void CheckingAccount::deposit(double amount)
  {
   checking_balance_ += amount;                                                 //add amount to checking_balance_
  }

  
  void CheckingAccount::withdrawl(double amount)
  {
   checking_balance_ -= amount;                                                 //subtract amount from checking_balance_
  }
  

