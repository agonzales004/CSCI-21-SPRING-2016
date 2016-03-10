  #include "account.h"
  
  Account::Account(string name, double balance)
       : name_(name), balance_(balance)
       {
         
       }
  

  /*
   * Accessor for name_
   * @return string - The name_ value
   */
  string Account::name() const
  {
    return name_;
  }

  /*
   * Accessor for balance_
   * @return double - The balance_ value
   */
  double Account::view_balance() const
  {
    return balance_;
  }

  /*
   * Mutator for name_
   * @param string name - The string to set name_ to
   */
  void Account::set_name(string name)
  {
    
  }
  /*
   * Mutator for balance_
   * @param double value - The value to set double_ to
   */
  void Account::set_balance(double balance)
  {
    balance_ = balance;
  }
  /*
   * Mutator for balance_
   * @param double value - The value to add to balance_
   */
  void Account::deposit(double amount)
  {
    balance_ += amount;
  }
  /*
   * Mutator for balance_
   * @param double value - The value to subtract from balance_
   */
  void Account::withdrawl(double amount)
  {
    balance_ -= amount;
  }
  
