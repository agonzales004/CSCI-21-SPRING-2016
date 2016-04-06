/*
 * Name        : prize.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "prize.h"

 /*
   * Default Construcotr
   * Sets prizeName to "NO NAME"
   * sets prizeValue to 0
   */
  Prize::Prize()
  {
     prizeName = "NO NAME";
     prizeValue = 0;
  }

  /*
   * Overloaded Constructor
   * parameters for all data members
   */
  Prize::Prize(string name, unsigned int value)
  {
    prizeName = name;
    prizeValue = value;
  }

  /*
   * Destructor
   * empty
   */
  Prize::~Prize()
  {
    
  }

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  bool operator ==(const Prize &prize1, const Prize &prize2)
  {
     if(prize1 == prize2)
     {
         return true;
     }
     else 
     {
         return false;
     }
  }

  /*
   * Accessor for prizeName
   * @return prizeName
   */
  string Prize::getName() const
  {
     return prizeName; 
  }
  
   /*
   * Accessor for prizeValue
   * @return prizeValule
   */
  unsigned int Prize::getValue() const
  {
      return prizeValue;
  }

  /*
   * Mutator for prizeName
   * @parameter sets prizeName
   */
  void Prize::setName(string name)
  {
      prizeName = name;
  }

  /*
   * Mutator for prizeValue
   * @parameter sets prizeValue
   */
  void Prize::setValue(unsigned int value)
  {
      prizeValue = value;
  }
  
 