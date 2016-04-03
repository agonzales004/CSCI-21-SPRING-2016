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
        if(head_ == NULL)
        {
          SLNode* node = new SLNode(head);
          tail_ = head_ = node;
          size_ = 1;
        }
        else
        {
          SLNode* node = new SLNode(head);
          node->set_next_node(head_);
          head_ = node;
          size_++;
        }
  }
  
   /*
   * creates a new dynamic SLNode with the contents of 
		 * the parameter and attaches as the last node (tail) of the list
		 */
  void SLList::InsertTail(int tail)
  {
    if(head_ == NULL)
    {
      SLNode* node = new SLNode(tail);
      tail_ = head_ = node;
      size_ = 1;
    }
    else
    {
      SLNode* node = new SLNode(tail);
      tail_->set_next_node(node);
      tail_ = tail_->next_node();
      size_++;
    }
     
  }
  
   /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void SLList::RemoveHead()
  {
      if(head_ != NULL && size_ >= 2)
      {
         SLNode* remove_node = NULL;
         remove_node = head_->next_node();
         free(head_);
         head_ = remove_node;
         remove_node = NULL;
         free(remove_node);
         size_  = size_ - 1;
      }
      else if(size_ == 1)                                                                      //handles only 1 item in list
      {
        tail_ = NULL;
        head_ = tail_;
        size_ = 0;
      }
      else
      {
       return;
      }
  }
  
  /*
   * removes the last node (tail) from the list,
	  * or does nothing if the list is empty
   *
   */
  void SLList::RemoveTail()
  {
    if(head_ != NULL && size_ >=2)
    {
      SLNode* removedNode = tail_;
      SLNode* iterator = head_;
      
      while(iterator->next_node() != tail_)
      {
        iterator = iterator->next_node();
      }
      tail_ = iterator;
      tail_->set_next_node(NULL);
      delete removedNode;
      
      size_ --;;
      
    }
    else if(size_ == 1)
    {
     head_ = NULL;
     size_ = 0;
    }
    else
    {
      return;
    }
  }


  /*
   * Returns the contents of the head node
   *  (The node head_ is pointing to)
   *  Returns 0 if the list is empty
   */  
  int SLList::GetHead() const
  {
    if(size_ > 0)
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
    if(size_ > 0)
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
      tail_ = NULL;
      size_ = 0;
      free(head_);
      free(tail_);
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