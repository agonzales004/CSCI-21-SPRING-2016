/*
 * Name        : checking_account.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

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

//Checking Account derived from account
class CheckingAccount: public Account {
 public:
 //constructor
 CheckingAccount(double interest = 0.0)
         : interest_(interest)
         {
          
         }
 
 //accessor for interest_ 
 double view_interest() const
 {
  return interest_;
 }
 
 //mutator for interest_
 double change_interest(double interest)
 {
  interest_ = interest;
 }
  
 


 private:
  //holds the value for the interest
  double interest_;
};

// REST OF HEADER GUARD GOES HERE
#endif