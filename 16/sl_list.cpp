/*
 * Name        : sl_list.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "sl_list.h"


 /*
   * Default Construcotr
   * Sets head_ to NULL
   * sets size_ to 0
   */
  SLList::SLList()
  {
      head_ = NULL;
      size_ = 0;
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
        SLNode* node = new SLNode(head);
        //add next_node to point to what head previously pointed to
        head_ = node;
        size_ = size_ + 1;
  }
  
   /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void SLList::RemoveHead()
  {
      if(head_ != NULL)
      {
          head_ = NULL;
          size_ = size_ - 1;
      }
  }

  /*
   * clears the entire contents of the list,
   * freeing all memory associated with all nodes
   */
  void SLList::Clear()
  {
      head_ = NULL;
      size_ = 0;
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
    std::stringstream ss;
    ss.clear();
    ss.str();
    
    SLNode* temp = head_;
    
    if(head_ != NULL)
    {
       while(temp->next_node() != NULL)
       {
          ss << temp-> contents();
       
          temp = temp->next_node();
       }    
    }
    else
    {
        ss << "";
    }
  
    string someString;
  
    someString = ss.str();
  
    return someString;
  }
  
  //int main(){}