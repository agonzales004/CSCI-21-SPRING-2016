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
   * creates a new SLNode with the contents of the parameter and
   * inserts it into the correct position in the list. The list
   * will be sorted with the lowest values in the front (head) and the
   * largest values in the back (tail).
   */
  void SLList::Insert(int value)
  {
   if(head_ == NULL)                                                            //handles empty list
   {
     InsertHead(value);
   }
   else                                                                         //handles at least 1 item in list
   {
     
    if(value <= head_->contents())                                         //handles if value is less than head_
     {
       InsertHead(value);
     }
     else if(value >= tail_->contents())                                         //handles if value is greater than tail_                                   
     {
       InsertTail(value);                                                       
     }
     else                                                                       //all other cases
     {
      SLNode* node = new SLNode(value);
      SLNode* temp = head_;
      SLNode* prev = NULL;
       
       while(temp->contents() < value)
       {
         prev = temp;
         temp = temp->next_node();
       }
       prev->set_next_node(node);
       node->set_next_node(temp);
       
       size_++;
     }
   }
  }
    
  /*
   * remove the first occurence of the supplied parameter
   * found as the data of a node. Return true on successful
   * removal or false if the list is empty or if the value
   * is not found
   */
  bool SLList::RemoveFirstOccurence(int removal)
  {
    SLNode* prev = NULL;
    SLNode* del = NULL;
    
    if(head_ != NULL)
    {
      if(head_->contents() == removal)                                          //checks if head is what needs to be removed
      {
          RemoveHead();
          return true;
      }
      prev = head_;                                                             //sets the nodes if head is not what needs to be removed
      del = head_->next_node();
      
      while(del != NULL)                                                        //traverse list to check values
      {
        if(del->contents() == removal)                                          //checks if current value is equal to the one were looking for
        {
          prev->set_next_node(del->next_node());
          
          if(del == tail_)                                                      //checks if this is the last value in list
          {
            tail_ = prev;
          }
          del = NULL;
          free(del);
          size_--;
          return true;
        }
        prev = del;
        del = del->next_node();
      }
    }
    else
    {
      return false;
    }
   
  }

  /*
   * Returns the contents of the head node
   *  (The node head_ is pointing to)
   *  Returns 0 if the list is empty
   */

  /*
   * creates a new dynamic SLNode with the contents of 
   * the parameter and attaches as the new head of the list
   */
  void SLList::InsertHead(int head)
  {
        if(head_ == NULL)                                                       //if no items in list
        {
          SLNode* node = new SLNode(head);                                      //new node with contents of head
          tail_ = head_ = node;                                                 //point head_ to new node and tail_ to head_
          size_ = 1;
        }
        else
        {
          SLNode* node = new SLNode(head);                                      //new node with conents of head
          node->set_next_node(head_);                                           //new node to head_
          head_ = node;                                                         //set new node to be head_
          size_++;
        }
  }
  
   /*
   * creates a new dynamic SLNode with the contents of 
		 * the parameter and attaches as the last node (tail) of the list
		 */
  void SLList::InsertTail(int tail)
  {
    if(head_ == NULL)                                                           //if the list is empty
    {
      SLNode* node = new SLNode(tail);                                          //new node with contents of tail
      tail_ = head_ = node;                                                     //tail_ to head_ and head_ to new node
      size_ = 1;                                                                //sets size_ equal to 1
    }
    else                                                                        //if the list is larger than 1
    {
      SLNode* node = new SLNode(tail);                                          //new node with contents of tail
      tail_->set_next_node(node);                                               //set the next node from tail_ to new node
      tail_ = tail_->next_node();                                               //set tail_ equal to that new node
      size_++;                                                                  //increment size_
    }
     
  }
  
   /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void SLList::RemoveHead()
  {
      if(head_ != NULL && size_ >= 2)                                           //if the list has more than 1 node
      {
         SLNode* remove_node = NULL;
         remove_node = head_->next_node();
         free(head_);
         head_ = remove_node;
         remove_node = NULL;
         free(remove_node);
         size_  = size_ - 1;
      }
      else if(size_ == 1)                                                       //handles only 1 item in list
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
    if(head_ != NULL && size_ >=2)                                              //rempves tail if size of list is >=2
    {
      SLNode* removedNode = tail_;                                              //points new node to tail_
      SLNode* iterator = head_;                                                 //create an interator to moves through list
      
      while(iterator->next_node() != tail_)                                     //cycles through list to find second to last node
      {
        iterator = iterator->next_node();
      }
      tail_ = iterator;                                                         //sets tail_ to the second to last node
      tail_->set_next_node(NULL);                                               //points tail_ to NULL
      delete removedNode;                                                       //removes old tail_
      
      size_ --;                                                                 //decrements size_                                                           
      
    }
    else if(size_ == 1)                                                         //handles 1 node in list
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
    if(head_ != NULL)
    {
     RemoveHead(); 
    }
    tail_ = head_ = NULL;
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