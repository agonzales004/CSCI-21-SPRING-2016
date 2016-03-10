/*
 * Name        : credit_account.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef CREDIT_ACCOUNT_H
#define CREDIT_ACCOUNT_H

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


//Credit Account derived from account
class CreditAccount: public Account {
 public:
 //constructor
 CreditAccount(double limit = 500.00)
          : credit_limit_(limit)
          {
           
          }
 
 //accessor for credit_limit_ 
 double view_limit() const
 {
  return credit_limit_;
 }
 
 //mutator for credit_limit_
 double change_limit(double interest)
 {
  credit_limit_ = credit_limit_;
 }
 //mutator for credit_limit_
 double make_payment(double payment)
 {
  credit_limit_ -= payment;
 }
  

 private:
  //holds the value of credit_limit_
  double credit_limit_;
};

// REST OF HEADER GUARD GOES HERE
#endif