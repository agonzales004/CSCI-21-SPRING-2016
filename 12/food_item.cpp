#include "food_item.h"


         FoodItem::FoodItem(string name, unsigned int value, unsigned int calories, string unit_measure, double units)
          : Item(name, value),
          calories_(calories),
          unit_of_measure_(unit_measure), 
          units_(units){
           
          }
  
/*
 * Destructor
 */
 //virtual  ~FoodItem(){}

  /*
   * Accessor for unit_of_measure_
   * @return string - The unit_of_measure_
   */
  string FoodItem::unit_of_measure() const
  {
   return unit_of_measure_;
  }

  /*
   * Accessor for calories_
   * @return unsigned int - The calories_ value
   */
  unsigned int FoodItem::calories() const
  {
   return calories_;
  }
  
    /*
   * Accessor for units_
   * @return double - The units_ value
   */
  double FoodItem::units() const
  {
   return units_;
  }

  /*
   * Mutator for unit_of_measure_
   * @param string name - The string to set unit_of_measure_ to
   */
  void FoodItem::set_unit_of_measure(string unit_of_measure)
  {
   unit_of_measure_ = unit_of_measure;
  }

  /*
   * Mutator for calories_
   * @param unsigned int value - The value to set calories_ to
   */
  void FoodItem::set_calories(unsigned int calories)
  {
   calories_ = calories;
  }
  
    /*
   * Mutator for units_
   * @param units - The value to set units_ to
   */
  void FoodItem::set_units(double units)
  {
   units_ = units;
  }

  /*
   * function ToString()
   * @return string containing name_, $value_, units_ unit_of_measure_, calories_ 
   * example: "shoes, $25, 2.50 cookie(s), 250 calories"
   */
  string FoodItem::ToString()
  {
    std::stringstream ss;
    ss.clear();
    ss.str();
    
    if (units_  == 1.5)
    {
     units_ = 1.50;
    }
    
    string item_name = Item::name();
    unsigned int some_value = Item::value();
    
    ss << item_name << ", $" << some_value << ", " << units_ << " " << unit_of_measure_;
    ss << ", " << calories_ << " calories";
    
    string some_string = ss.str();
    return some_string;
  }
  
