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


//Savings Account derived from account
class SavingsAccount: public Account {
 public:
 //constructor
 SavingsAccount(double interest = 0.0);
 
 //accessor for interest_ 
 double view_interest() const
 {
  return savings_interest_;
 }
 
 //mutator for interest_
 double change_interest(double interest)
 {
  savings_interest_ = interest;
 }
  

 private:
  //holds the value of the item
  double savings_interest_;
};

// REST OF HEADER GUARD GOES HERE
#endif