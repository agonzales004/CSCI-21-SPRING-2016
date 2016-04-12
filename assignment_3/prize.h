/*
 * Name        : prize.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef PRIZE_H
#define PRIZE_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

/*
 * Class Prize
 * A class that 
 */
class Prize {
 public:
  /*
   * Default Construcotr
   * Sets prizeName to "NO NAME"
   * sets prizeValue to 0
   */
    Prize();

  /*
   * Overloaded Constructor
   * parameters for all data members
   */
  Prize(string name, unsigned int value);
  /*
   * Destructor
   * empty
   */
  ~Prize();

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  friend bool operator ==(const Prize &prize1, const Prize &prize2);

  /*
   * Accessor for prizeName
   * @return prizeName
   */
  string getPrizeName() const;
  
   /*
   * Accessor for prizeValue
   * @return prizeValule
   */
  unsigned int getPrizeValue() const;

  /*
   * Mutator for prizeName
   * @parameter sets prizeName
   */
  void setPrizeName(string name); 

  /*
   * Mutator for prizeValue
   * @parameter sets prizeValue
   */
  void setPrizeValue(unsigned int value);

 private:
 //holds the name of the Prize
  string prizeName;  
  //holds the value of Prize
  unsigned int prizeValue;
};

// REST OF HEADER GUARD GOES HERE
#endif