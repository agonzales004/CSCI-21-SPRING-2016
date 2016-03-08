#include "credit_account.h"
 
 CreditAccount::CreditAccount(string name, double balance)
                : Account(name),
                  credit_balance_(balance)
                  {
                   
                  }
  
  /*
   * Accessor for balance_
   * @return double - The balance_ value
   */
  double CreditAccount::view_balance() const
  {
   return credit_balance_;
  }

  /*
   * Mutator for name_
   * @param string name - The string to set name_ to
   */
  void CreditAccount::set_name(string name)
  {
   
  }

  /*
   * Mutator for balance_
   * @param double value - The value to set double_ to
   */
  void CreditAccount::set_balance(double balance)
  {
   
  }
  
  void CreditAccount::deposit(double amount)
  {
   credit_balance_ += amount;                                                   //add deposit amount to credit_balance_
  }

  
  void CreditAccount::withdrawl(double amount)
  {
   credit_balance_ -= amount;                                                   //subtracts amount from credit_balance_
  }
  
