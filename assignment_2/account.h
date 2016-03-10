/*
 * Name        : account.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef ACCOUNT_H
#define ACCOUNT_H

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


class Account {
 public:
  /*
   * Constructor #1.
   * Sets name and balance, defaults to "bank account" and 0.0
   * @param string name - sets name_ to name
   * @param double balance - sets balance_ to balance
   */
  Account(string name = "bank account", double balance = 0.0);
  
/*

  /*
   * Accessor for name_
   * @return string - The name_ value
   */
  string name() const;

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
  
 

 private:
 //holds the name of the account
  string name_;
  //holds the balance of the accout
  double balance_;
};

// REST OF HEADER GUARD GOES HERE
#endif