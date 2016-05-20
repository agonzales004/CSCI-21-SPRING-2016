/*
 * Name        : DLList.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef DL_LIST_H
#define DL_LIST_H

#include "DLNode.h"
#include <string>
#include <fstream>
#include <map>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <list>
#include <iterator>
#include <sstream>
using std::cout;
using std::ifstream;
using std::endl;
using std::string;
using std::ostream;
using std::map;
using std::stringstream;

/*
 * Class SLList.
 * A class that 
 */
class DLList : public DLNode 
{
 public:
  /*
   * Default Construcotr
   * Sets head_ to NULL
   * sets size_ to 0
   * sets tail_ to NULL
   */
  DLList();

  /*
   * Destructor
   * calls CLear()
   */
  ~DLList();
  
  /*
   * creates a new dynamic DLNode with the contents of 
   * the parameter and attaches as the new head of the list
   */
  void pushFront(string newContents);
  
  /*
   * creates a new dynamic DLNode with the contents of 
		 * the parameter and attaches as the last node (tail) of the list
		 */
  void pushBack(string newContents);
  
   /*
   * creates a new DLNode with the contents of the parameter and
   * inserts it into the correct position in the list. The list
   * will be sorted with the lowest values in the front (head) and the
   * largest values in the back (tail).
   */
  void insert(string newContents); 
  
  /*
   * Returns the contents of the head node
   *  (The node head_ is pointing to)
   * throw exception(throw "LIST EMPTY")
   * if list is empty
   */
  string getFront() const;
  
  /*
   * Returns the contents of the tail node
   * (The node tail_ is pointing to)
   * throw exception(throw "LIST EMPTY")
   * if list is empty
   */
  string getBack() const;
  
  /*
   * Returns true if target is in the list
   * else returns false
   */  
  bool get(string target);
  
  /*
   * removes the head node from the list,
   * or does nothing if the list is empty
   */
  void popFront();
  
  /*
   * removes the last node (tail) from the list,
	  * or does nothing if the list is empty
   */
  void popBack();  
  
  /*
   * remove the first occurence of the supplied parameter
   * found as the data of a node. Return true on successful
   * removal or false if the list is empty or if the value
   * is not found
   */
  bool removeFirst(string target);
  
  /*
   * remove all instances of DLNode containing target; 
   * do nothing if target is not found
   */  
  bool removeAll(string target);

  /*
   * clear all nodes from list, reset count to zero, 
   * set head and tail to NULL
   */
  void Clear();
  
   /*
   * accessor for count
   * @returns count
   */
  unsigned int getSize() const;

  /*
   * display the contents of each node in the list, 
   * formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), 
   * to the output stream out
   */
  friend ostream& operator<< (ostream& out, const DLList& src); 


 private:
 //points to the first node in a doubley-linked list
  DLNode* head_; 
  //points to the last node in a doubley-linked list
  DLNode* tail_;
  //stores the count of the number of nodes in the list
  unsigned int count;
};

// REST OF HEADER GUARD GOES HERE
#endif