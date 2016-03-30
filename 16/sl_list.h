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
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void RemoveHead();
  
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
  //stores the count of the number of nodes in the list
  unsigned int size_;
};

// REST OF HEADER GUARD GOES HERE
#endif