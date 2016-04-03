/*
 * Name        : sl_list.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "sl_list.h"


 /*
   * Default Construcotr
   * Sets head_ to NULL
   * Sets tail_ to NULL
   * sets size_ to 0
   */
  SLList::SLList()
  {
      head_ = NULL;
      tail_ = NULL;
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
        SLNode* node = new SLNode(head);                                        //creates new node with contents from parameter head
        node->set_next_node(head_);                                             //add next_node to point to what head previously pointed to
        head_ = node;                                                           //assigns the newly made node to head
        size_ = size_ + 1;                                                      //increases size by 1
  }
  
   /*
   * creates a new dynamic SLNode with the contents of 
		 * the parameter and attaches as the last node (tail) of the list
		 */
  void SLList::InsertTail(int tail)
  {
       SLNode* node = new SLNode(tail);                                         //new node to assign to end of list
       SLNode* temp = head_;                                                    //create temp to be an iterator
    
       if(head_ != NULL)
       {
          while(temp->next_node() != NULL)                                      //cycles through the list until null is next
          {
             temp = temp->next_node();                                          
          }
         temp->set_next_node(node);                                             //adds new node to end of list
         tail_ = node;                                                          //assigns new node to tail_
       } 
          
  }
  
   /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void SLList::RemoveHead()
  {
      if(head_ != NULL && head_->next_node() != NULL)
      {
         SLNode* remove_node = NULL;
         remove_node = head_->next_node();
         free(head_);
         head_ = remove_node;
         remove_node = NULL;
         free(remove_node);
         size_ = size_ - 1;
      }
      else                                                                      //handles only 1 item in list
      {
        //free(head_);
        //head_ = tail_;
        //free(tail_);
        //tail_ = NULL;
      }
      
  }
  
  /*
   * removes the last node (tail) from the list,
	  * or does nothing if the list is empty
   *
   */
  void SLList::RemoveTail()
  {
    if(head_ != NULL)
    {
      SLNode* temp = tail_;
      SLNode* iterator = head_; 
      
      while(iterator->next_node() != tail_)
      {
        iterator = iterator->next_node();
      }
    // delete temp;
     
      
      
    }
  }

  /*
   * Returns the contents of the head node
   *  (The node head_ is pointing to)
   *  Returns 0 if the list is empty
   */  
  int SLList::GetHead() const
  {
    if(size_ != 0)
    {
      return head_->contents();                                                 //returns contents of head if list isn't empty
    }
    else
    {
      return 0;                                                                 //returns 0 if empty
    }
  }
  
  /*
   * Returns the contents of the tail node
   *  (The node tail_ is pointing to)
   *  Returns 0 if the list is empty
   */
  int SLList::GetTail() const
  {
    if(size_ != 0)
    {
      return tail_->contents();                                                 //returns contents of head if list isn't empty
    }
    else
    {
      return 0;                                                                 //returns 0 if empty
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
      free(head_);
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
    
    SLNode* temp = head_;                                                       //create temp to be an iterator
    
    if(head_ != NULL)
    {
       while(temp->next_node() != NULL)                                         //cycles through the list until null is next
       {
          ss << temp-> contents();
       
          temp = temp->next_node();
        
          ss << ", ";
          
       }   
       ss << temp->contents();                                                  //prints out the last node
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