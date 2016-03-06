  #include "account.h"
  
  Account::Account(string name, double balance)
       : name_(name), balance_(balance)
       {
         
       }
  
/*

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
  
  void Account::deposit(double amount)
  {
    balance_ += amount;
  }
  
  void Account::withdrawl(double amount)
  {
    balance_ -= amount;
  }
  

  /*
   * function ToString()
   * @return string containing name_, $value_
   * example: "bank account, balance: $25"
   */
  string Account::ToString()
  {
    std::stringstream ss;
    ss.clear();
    ss.str();
    
    ss << name_ << ", balance: " << balance_;
    
    string some_string = ss.str();
    return some_string;
  }
  
/*
  int main()
  {
   Account my_account;
   my_account.atm();
  }
 */  