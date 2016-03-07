/*
 * Name        : magic_item.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef MAGIC_ITEM_H
#define MAGIC_ITEM_H

#include "item.h"

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
class MagicItem: public Item {
 public:
  /*
   * Constructor #1.
   * Sets name, value, calories, units of measure, units
   * @param string name - sets name_ to name
   * @param unsigned int value - sets value_ to value
   * @param string description
   * @param unsigned int mana_required_
   */
  MagicItem(string name = "magicitem", unsigned int value = 0, string description = "no description", unsigned int mana_required = 0);
  
/*
 * Destructor
 */
 //virtual  
 ~MagicItem(); 

  /*
   * Accessor for description_
   * @return string - The description_
   */
  string description() const;

  /*
   * Accessor for mana_required_
   * @return unsigned int - The mana_required_ value
   */
  unsigned int mana_required() const;
  

  /*
   * Mutator for description_
   * @param string name - The string to set description_
   */
  void set_description(string description);

  /*
   * Mutator for mana_required_
   * @param unsigned int value - The value to set mana_required_ to
   */
  void set_mana_required(unsigned int mana_required);
  

  /*
   * function ToString()
   * @return string containing name_, $value_, description_, mana_required_ 
   * example: "shoes, $25, made of felt, 2 mana"
   */
  string ToString();

 private:
  string description_;
  unsigned int mana_required_;
};

// REST OF HEADER GUARD GOES HERE
#endif