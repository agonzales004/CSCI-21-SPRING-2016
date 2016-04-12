 /*
 * Name        : box.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */

#include "box.h"
#include "prize.h"



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
    boxNumber = 0;
    boxColor = "NO COLOR";
    prizeCapacity = 5;
    prizeCount = 0;
    prizes = new Prize[prizeCapacity];
  }

  /*
   * Overloaded Constructor
   * parameters boxNumber/boxColor/capacity
   * in the definition, prizes array must be initialized to match prizeCapacity
   */
  Box::Box(unsigned int number, string color, unsigned int capacity)
  {
   
    boxNumber = number;
    boxColor = color;
    prizeCapacity = capacity;
    prizeCount = 0;
    prizes = new Prize[capacity];
   
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
    return boxNumber;
  }

  /*
   * Accessor for boxColor
   * @return boxColor
   */
  string Box::getBoxColor() const
  {
    return boxColor;
  }
  
   /*
   * Accessor for prizeCapacity
   * @return prizeCapacity
   */
  unsigned int Box::getPrizeCapacity() const
  {
    return prizeCapacity;
  }

  /*
   * Accessor for prizeCount
   * @return prizeCount
   */
  unsigned int Box::getPrizeCount() const
  {
    return prizeCount;
  }

  /*
   * Mutator for boxNumber
   * @parameter sets boxNumber
   */
  void Box::setBoxNumber(unsigned int number)
  {
    boxNumber = number;
  }
  
  /*
   * Mutator for boxColor
   * @parameter sets boxColor
   */
  void Box::setBoxColor(string color)
  {
    boxColor = color;
  }
  
  /*
   * function addPrize
   * @parameter prize to add to box
   * @ return true/false depending on space
   */
  bool Box::addPrize(Prize prize)
  {
    if(prizeCount >= prizeCapacity)
    {
      return false;                                                             //returns false if there is no room in box
    }
    else
    {
      prizes[prizeCount++] = prize;     
      return true;
    }  
  }
  
  /*
   * function getPrize
   * @parameter index to find prize in box
   * @return prize in that index spot
   * @ return scratch if index invalid
   */
  Prize Box::getPrize(unsigned int index)
  {
    if(index >= prizeCount)
    {
      return scratch;
    }
    else
    {
      return prizes[index];
    }
  }
  
  /*
   * function removePrize
   * @parameter index to find prize in box
   * @return prize and remove from box
   * @ return scratch if index invalid
   */  
  Prize Box::removePrize(unsigned int index)
  
  {
    if (index >= prizeCount)
    {
      return scratch;
    }
    else 
    {
      Prize tmp = prizes[index];
      
      for (int i = index; i < prizeCount - 1; i++)
      {
        prizes[i] = prizes[i - 1];
      }
      prizeCount--;
      return tmp;
    }
  }