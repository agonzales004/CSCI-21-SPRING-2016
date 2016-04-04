 /*
 * Name        : box.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "box.h"

  /*
   * Default Construcotr
   * Sets boxNumber to 0
   * sets boxColor to NO COLOR
   * prizeCapacity = 5
   * prizeCount = 0
   * prizes array initializaed to match prize capacity
   */
  Box::Box()
  {
   
  }

  /*
   * Overloaded Constructor
   * parameters boxNumber/boxColor/capacity
   * in the definition, prizes array must be initialized to match prizeCapacity
   */
  Box::Box(unsigned int number, string color, unsigned int capacity)
  {
   
  }

  /*
   * Destructor
   * free memory associated with prizes
   */
  Box::~Box()
  {
   
  }

  /*
   * Accessor for boxNumber
   * @return boxNumber
   */
  unsigned int Box::getBoxNumber() const
  {
   
  }

  /*
   * Accessor for boxColor
   * @return boxColor
   */
  string Box::getBoxColor() const
  {
   
  }
  
   /*
   * Accessor for prizeCapacity
   * @return prizeCapacity
   */
  unsigned int Box::getprizeCapacity() const
  {
   
  }

  /*
   * Accessor for prizeCount
   * @return prizeCount
   */
  unsigned int Box::getPrizeCount() const
  {
   
  }

  /*
   * Mutator for boxNumber
   * @parameter sets boxNumber
   */
  void Box::setBoxNumber(unsigned int number)
  {
   
  }
  
  /*
   * Mutator for boxColor
   * @parameter sets boxColor
   */
  void Box::setBoxColor(string color)
  {
   
  }
  
  /*
   * function addPrize
   * @parameter prize to add to box
   * @ return true/false depending on space
   */
  bool Box::addPrize(Prize prize)
  {
   
  }
  
  /*
   * function getPrize
   * @parameter index to find prize in box
   * @return prize in that index spot
   * @ return scratch if index invalid
   */  
  Prize Box::getPrize(unsigned int index)
  {
   
  }
  
  /*
   * function removePrize
   * @parameter index to find prize in box
   * @return prize and remove from box
   * @ return scratch if index invalid
   */    
  Prize Box::removePrize(unsigned int index)
  {
   
  }
  
  int main()
  {}