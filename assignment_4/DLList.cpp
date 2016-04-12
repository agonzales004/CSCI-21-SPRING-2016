/*
 * Name        : DLList.cpp
 * Author      : Anthony Gonzales
 * Description : Assignment_4
 */
#include "DLList.h"

  /*
   * Default Construcotr
   * Sets head_ to NULL
   * sets size_ to 0
   * sets tail_ to NULL
   */
  DLList::DLList()
  {
      head_ = NULL;
      tail_ = NULL;
      count = 0; 
  }

  /*
   * Destructor
   * calls CLear()
   */
  DLList::~DLList()
  {
      Clear();
  }
  
  /*
   * creates a new dynamic DLNode with the contents of 
   * the parameter and attaches as the new head of the list
   */
  void DLList::pushFront(int newContents)
  {
        if(head_ == NULL)                                                       //if no items in list
        {
          DLNode* node = new DLNode(newContents);                               //new node with contents of head
          tail_ = head_ = node;                                                 //point head_ to new node and tail_ to head_
          count = 1;
        }
        else
        {
          DLNode* node = new DLNode(newContents);                               //new node with conents of head
          node->setNext(head_);                                                 //new node to head_
          head_ = node;                                                         //set new node to be head_
          count++;
        }
  }
  
  /*
   * creates a new dynamic DLNode with the contents of 
		 * the parameter and attaches as the last node (tail) of the list
		 */
  void DLList::pushBack(int newContents)
  {
    if(head_ == NULL)                                                           //if the list is empty
    {
      DLNode* node = new DLNode(newContents);                                   //new node with contents of tail
      tail_ = head_ = node;                                                     //tail_ to head_ and head_ to new node
      count = 1;                                                                //sets size_ equal to 1
    }
    else                                                                        //if the list is larger than 1
    {
      DLNode* node = new DLNode(newContents);                                   //new node with contents of tail
      tail_->setNext(node);                                                     //set the next node from tail_ to new node
      tail_ = tail_->getNext();                                                 //set tail_ equal to that new node
      count++;                                                                  //increment size_
    } 
  }
  
   /*
   * creates a new DLNode with the contents of the parameter and
   * inserts it into the correct position in the list. The list
   * will be sorted with the lowest values in the front (head) and the
   * largest values in the back (tail).
   */
  void DLList::insert(int newContents)
  {
       if(head_ == NULL)                                                        //handles empty list
       {
         pushFront(newContents);
       }
       else                                                                     //handles at least 1 item in list
       {
         
        if(newContents <= head_->getContents())                                 //handles if value is less than head_
         {
           pushFront(newContents);
         }
         else if(newContents >= tail_->getContents())                           //handles if value is greater than tail_                                   
         {
           pushBack(newContents);                                                       
         }
         else                                                                   //all other cases
         {
          DLNode* node = new DLNode(newContents);
          DLNode* temp = head_;
          DLNode* prev = NULL;
           
           while(temp->getContents() < newContents)
           {
             prev = temp;
             temp = temp->getNext();
           }
           prev->setNext(node);
           node->setNext(temp);
           
           count++; 
         }
       }
  }
  
  /*
   * Returns the contents of the head node
   *  (The node head_ is pointing to)
   * throw exception(throw "LIST EMPTY")
   * if list is empty
   */
  int DLList::getFront() const
  {
    if(count > 0)
    {
      return head_->getContents();                                              //returns contents of head_ if list isn't empty
    }
    else
    {
      throw("LIST EMPTY");                                                      //throws "LIST IS EMPTY"
    }  
  }
  
  /*
   * Returns the contents of the tail node
   * (The node tail_ is pointing to)
   * throw exception(throw "LIST EMPTY")
   * if list is empty
   */
  int DLList::getBack() const
  {
    if(count > 0)
    {
      return tail_->getContents();                                              //returns contents of tail_ if list isn't empty
    }
    else
    {
      throw("LIST EMPTY");                                                      //throws "LIST IS EMPTY"
    }  
  }
  
  /*
   * Returns true if target is in the list
   * else returns false
   */  
  bool DLList::get(int target)
  {
    if(head_)                                                                   //enters if there is something in list
    {
           DLNode* temp = head_;                                                 //create a temp to run through list
       
            while(temp != NULL)                                                 //if temp = NULL will exit loop
            {
                if(temp->getContents() == target)                               //if temp equals the target will return true
                {
                    return true;
                }
                
                temp = temp->getNext();                                         //set temp to next node
            } 
            
            return false;                                                       //if it gets to this point that means temp didnt find the target
    }
    else
    {
        return false;                                                           //no head, return false
    }
  }
  
  /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void DLList::popFront()
  {
      if(head_ != NULL && count >= 2)                                           //if the list has more than 1 node
      {
         DLNode* remove_node = NULL;
         remove_node = head_->getNext();
         free(head_);
         head_ = remove_node;
         remove_node = NULL;
         free(remove_node);
         count--;
      }
      else if(count == 1)                                                       //handles only 1 item in list
      {
        tail_ = NULL;
        head_ = tail_;
        count = 0;
      }
      else
      {
       return;
      }   
  }
  
  /*
   * removes the last node (tail) from the list,
	  * or does nothing if the list is empty
   */
  void DLList::popBack()
  {
    if(head_ != NULL && count >=2)                                              //rempves tail if size of list is >=2
    {
      DLNode* removedNode = tail_;                                              //points new node to tail_
      DLNode* iterator = head_;                                                 //create an interator to moves through list
      
      while(iterator->getNext() != tail_)                                       //cycles through list to find second to last node
      {
        iterator = iterator->getNext();
      }
      tail_ = iterator;                                                         //sets tail_ to the second to last node
      tail_->setNext(NULL);                                                     //points tail_ to NULL
      delete removedNode;                                                       //removes old tail_
      
      count --;                                                                 //decrements size_                                                           
      
    }
    else if(count == 1)                                                         //handles 1 node in list
    {
     head_ = NULL;
     count = 0;
    }
    else
    {
      return;
    }  
  }
  
  /*
   * remove the first occurence of the supplied parameter
   * found as the data of a node. Return true on successful
   * removal or false if the list is empty or if the value
   * is not found
   */
  bool DLList::removeFirst(int target)
  {
    DLNode* prev = NULL;
    DLNode* del = NULL;
    
    if(head_ != NULL)
    {
      if(head_->getContents() == target)                                        //checks if head is what needs to be removed
      {
          popFront();
          return true;
      }
      prev = head_;                                                             //sets the nodes if head is not what needs to be removed
      del = head_->getNext();
      
      while(del != NULL)                                                        //traverse list to check values
      {
        if(del->getContents() == target)                                        //checks if current value is equal to the one were looking for
        {
          prev->setNext(del->getNext());
          
          if(del == tail_)                                                      //checks if this is the last value in list
          {
            tail_ = prev;
          }
          del = NULL;
          free(del);
          count--;
          return true;
        }
        prev = del;
        del = del->getNext();
      }
    }
    else
    {
      return false;
    }
     
  }
  
  /*
   * remove all instances of DLNode containing target; 
   * do nothing if target is not found
   */  
  bool DLList::removeAll(int target)
  {
      bool isTrue = true;
      
      while(isTrue == true)
      {
          isTrue = removeFirst(target);
      }
  }

  /*
   * clear all nodes from list, reset count to zero, 
   * set head and tail to NULL
   */
  void DLList::Clear()
  {
    if(head_)
    {
     popBack(); 
    }
    tail_ = head_ = NULL;
    count = 0;
  }
  
   /*
   * accessor for count
   * @returns count
   */
  unsigned int DLList::getSize() const
  {
     return count; 
  }

  /*
   * display the contents of each node in the list, 
   * formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), 
   * to the output stream out
   */
  ostream& operator<< (ostream& out, const DLList& src)
  {
      
  }
