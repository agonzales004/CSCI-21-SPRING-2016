/*
 * Name        : savings_account.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "account.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;
using std::stringstream;


class SavingsAccount: public Account {
 public:
  /*
   * Constructor #1.
   * Sets name and value, defaults to "item" and 0
   * @param string name - sets name_ to name
   * @param unsigned int value - sets value_ to value
   */
  SavingsAccount(string name = "savings account", double balance = 0.0);
  
  /*
   * Accessor for balance_
   * @return double - The balance_ value
   */
  double view_balance() const;

  /*
   * Mutator for name_
   * @param string name - The string to set name_ to
   */
  void set_name(string name);

  /*
   * Mutator for balance_
   * @param double value - The value to set double_ to
   */
  void set_balance(double balance);
  
  void deposit(double amount);

  
  void withdrawl(double amount);
  
  /*
   * function ToString()
   * @return string containing name_, $value_
   * example: "bank account, balance: $25"
   */
  string ToString();

 private:
  //holds the value of the item
  double savings_balance_;
};

// REST OF HEADER GUARD GOES HERE
#endif