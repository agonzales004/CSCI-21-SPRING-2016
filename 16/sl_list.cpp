/*
 * Name        : sl_list.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "sl_list.h"
#include "sl_node.h"

 /*
   * Default Construcotr
   * Sets head_ to NULL
   * sets size_ to 0
   */
  SLList::SLList()
  {
      head_ = NULL;
      size_ - 0;
  }

  /*
   * Destructor
   * calls CLear()
   */
  SLList::~SLList()
  {
      Clear();
  }

  /*
   * creates a new dynamic SLNode with the contents of 
   * the parameter and attaches as the new head of the list
   */
  void SLList::InsertHead(int head)
  {
      new SLNode(head);
      
  }
  
   /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void SLList::RemoveHead()
  {
      if(head_ != NULL)
      {
          
      }
  }

  /*
   * clears the entire contents of the list,
   * freeing all memory associated with all nodes
   */
  void SLList::Clear()
  {
      
  }
  
   /*
   * accessor for size_
   * @returns size_
   */
  unsigned int SLList::size() const
  {
      return size_;
  }
  /*
   * returns a string representation of the contents
   * of all nodes in the list, in the format
   * NUM1, NUM2, ..., LASTNUM
   * returns the empty string on an empty list (i.e. returns "")
   */
  string SLList::ToString() const
  {
      
  }
  
  //int main(){}