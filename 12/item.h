/*
 * Name        : item.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef LAB_H
#define LAB_H

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

/*
 * Class Item
 * 
 */
class Item {
 public:
  /*
   * Constructor #1.
   * Sets name and value, defaults to "item" and 0
   * @param string name - sets name_ to name
   * @param unsigned int value - sets value_ to value
   */
  Item(string name = "item", unsigned int value = 0);
  
/*
 * Destructor
 */
 //virtual  
 ~Item(); 

  /*
   * Accessor for name_
   * @return string - The name_ value
   */
  string name() const;

  /*
   * Accessor for value_
   * @return unsigned int - The value_ value
   */
  unsigned int value() const;

  /*
   * Mutator for name_
   * @param string name - The string to set name_ to
   */
  void set_name(string name);

  /*
   * Mutator for value_
   * @param unsigned int value - The value to set value_ to
   */
  void set_value(unsigned int value);

  /*
   * function ToString()
   * @return string containing name_, $value_
   * example: "shoes, $25"
   */
  string ToString();

 private:
 //holds the name of the item
  string name_;
  //holds the value of the item
  unsigned int value_;
};

// REST OF HEADER GUARD GOES HERE
#endif