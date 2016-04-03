/*
 * Name        : sl_list.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef LIST_H
#define LIST_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <list>
#include <iterator>
#include <sstream>
#include "sl_node.h"
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

/*
 * Class SLList.
 * A class that 
 */
class SLList {
 public:
  /*
   * Default Construcotr
   * Sets head_ to NULL
   * sets size_ to 0
   * sets tail_ to NULL
   */
  SLList();

  /*
   * Destructor
   * calls CLear()
   */
  ~SLList();

  /*
   * creates a new dynamic SLNode with the contents of 
   * the parameter and attaches as the new head of the list
   */
  void InsertHead(int head);
  
  /*
   * creates a new dynamic SLNode with the contents of 
		 * the parameter and attaches as the last node (tail) of the list
		 */
  void InsertTail(int tail);
  
   /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void RemoveHead();
  
   /*
   * removes the last node (tail) from the list,
	  * or does nothing if the list is empty
   */
  void RemoveTail();  
  
  /*
   * Returns the contents of the head node
   *  (The node head_ is pointing to)
   *  Returns 0 if the list is empty
   */
  int GetHead() const;
  
  /*
   * Returns the contents of the tail node
   *  (The node tail_ is pointing to)
   *  Returns 0 if the list is empty
   */
  int GetTail() const;
  
  /*
   * clears the entire contents of the list,
   * freeing all memory associated with all nodes
   */
  void Clear();
  
   /*
   * accessor for size_
   * @returns size_
   */
  unsigned int size() const;

  /*
   * returns a string representation of the contents
   * of all nodes in the list, in the format
   * NUM1, NUM2, ..., LASTNUM
   * returns the empty string on an empty list (i.e. returns "")
   */
  string ToString() const; 


 private:
 //points to the first node in a singly-linked list
  SLNode* head_; 
 //points to the last node in a singly-linked list
  SLNode* tail_;
  //stores the count of the number of nodes in the list
  unsigned int size_;
};

// REST OF HEADER GUARD GOES HERE
#endif