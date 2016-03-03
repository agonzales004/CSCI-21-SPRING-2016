/*
 * Name        : food_item.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H

#include "item.h"
#include "item.cpp"

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
class FoodItem: public Item {
 public:
  /*
   * Constructor #1.
   * Sets name, value, calories, units of measure, units
   * @param string name - sets name_ to name
   * @param unsigned int value - sets value_ to value
   * @param unsigned int calories
   * @param string units_measure
   * @param double units
   */
  FoodItem(string name = "fooditem", unsigned int value = 0, unsigned int calories = 0, string unit_measure = "nounits", double units = 0.0);
  
/*
 * Destructor
 */
 //virtual  ~FoodItem(); 

  /*
   * Accessor for unit_of_measure_
   * @return string - The unit_of_measure_
   */
  string unit_of_measure() const;

  /*
   * Accessor for calories_
   * @return unsigned int - The calories_ value
   */
  unsigned int calories() const;
  
    /*
   * Accessor for units_
   * @return double - The units_ value
   */
  double units() const;

  /*
   * Mutator for unit_of_measure_
   * @param string name - The string to set unit_of_measure_ to
   */
  void set_unit_of_measure(string unit_of_measure);

  /*
   * Mutator for calories_
   * @param unsigned int value - The value to set calories_ to
   */
  void set_calories(unsigned int calories);
  
    /*
   * Mutator for units_
   * @param units - The value to set units_ to
   */
  void set_units(double units);

  /*
   * function ToString()
   * @return string containing name_, $value_, units_ unit_of_measure_, calories_ 
   * example: "shoes, $25, 2.50 cookie(s), 250 calories"
   */
  string ToString();

 private:
 //holds the name of the unit
  string unit_of_measure_;
  //holds the number of calories
  unsigned int calories_;
  //holds a count of how many units we have
  double units_;
};

// REST OF HEADER GUARD GOES HERE
#endif