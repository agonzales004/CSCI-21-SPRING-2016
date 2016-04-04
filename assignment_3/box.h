/*
 * Name        : box.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef BOX_H
#define BOX_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "prize.cpp"
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

/*
 * Class BOX
 * A class that 
 */
class Box {
 public:
  /*
   * Default Construcotr
   * Sets boxNumber to 0
   * sets boxColor to NO COLOR
   * prizeCapacity = 5
   * prizeCount = 0
   * prizes array initializaed to match prize capacity
   */
  Box();

  /*
   * Overloaded Constructor
   * parameters boxNumber/boxColor/capacity
   * in the definition, prizes array must be initialized to match prizeCapacity
   */
  Box(unsigned int number, string color, unsigned int capacity);

  /*
   * Destructor
   * free memory associated with prizes
   */
  ~Box();

  /*
   * Accessor for boxNumber
   * @return boxNumber
   */
  unsigned int getBoxNumber() const;

  /*
   * Accessor for boxColor
   * @return boxColor
   */
  string getBoxColor() const;
  
   /*
   * Accessor for prizeCapacity
   * @return prizeCapacity
   */
  unsigned int getprizeCapacity() const;

  /*
   * Accessor for prizeCount
   * @return prizeCount
   */
  unsigned int getPrizeCount() const; 

  /*
   * Mutator for boxNumber
   * @parameter sets boxNumber
   */
  void setBoxNumber(unsigned int number);
  
  /*
   * Mutator for boxColor
   * @parameter sets boxColor
   */
  void setBoxColor(string color);  
  
  /*
   * function addPrize
   * @parameter prize to add to box
   * @ return true/false depending on space
   */
  bool addPrize(Prize prize);
  
  /*
   * function getPrize
   * @parameter index to find prize in box
   * @return prize in that index spot
   * @ return scratch if index invalid
   */  
  Prize getPrize(unsigned int index);  
  
  /*
   * function removePrize
   * @parameter index to find prize in box
   * @return prize and remove from box
   * @ return scratch if index invalid
   */    
  Prize removePrize(unsigned int index);

 private:
 //holds number of boxes
  unsigned int boxNumber;
  //holds color of box
  string boxColor;
  //
  Prize scratch;
  //for dynamic array
  Prize* prizes;
  //capacity of prizes
  unsigned int prizeCapacity;
  //number of prizes
  unsigned int prizeCount;
};

// REST OF HEADER GUARD GOES HERE
#endif