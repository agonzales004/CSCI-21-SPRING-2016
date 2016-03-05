#include "magic_item.h"

MagicItem::MagicItem(string name, unsigned int value, string description, unsigned int mana_required)
          : Item(name, value),
            description_(description),
            mana_required_(mana_required)
            {
             
            }
/*
 * Destructor
 */
 //virtual  ~MagicItem(); 

  /*
   * Accessor for description_
   * @return string - The description_
   */
  string MagicItem::description() const
  {
   
  }

  /*
   * Accessor for mana_required_
   * @return unsigned int - The mana_required_ value
   */
  unsigned int MagicItem::mana_required() const
  {
   
  }
  

  /*
   * Mutator for description_
   * @param string name - The string to set description_
   */
  void MagicItem::set_description(string description)
  {
   
  }

  /*
   * Mutator for mana_required_
   * @param unsigned int value - The value to set mana_required_ to
   */
  void MagicItem::set_mana_required(unsigned int mana_required)
  {
   
  }
  

  /*
   * function ToString()
   * @return string containing name_, $value_, description_, mana_required_ 
   * example: "shoes, $25, made of felt, 2 mana"
   */
  string MagicItem::ToString()
  {
   
  }