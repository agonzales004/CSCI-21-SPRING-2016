/*
 * Name        : DLNode.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef DL_NODE_H
#define DL_NODE_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

/*
 * Class DLNode.
 */
class DLNode {
 public:
  /*
   * Default Construcotr
   * Sets next_node_ to NULL
   * Sets previous_node_ to NULL
   * sets contents_ to 0
   */
  DLNode();

  /*
   * Overloaded Constructor
   * int parameter assigned to contents_
   * sets next_node to NULL
   * sets previous_node_ to NULL
   */
  DLNode(string contents);

  /*
   * Destructor
   * does nothing
   */
  ~DLNode();

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  void setContents(string newContents);

   /*
   * Mutator for next_node_
   * @param SLNode* some_node to set next_node_ to 
   */
  void setNext(DLNode* newNext);

   /*
   * Mutator for previous_node_
   * @param DLNode* newPrevious to set previous_node to
   */
  void setPrevious(DLNode* newPrevious);

  /*
   * Accessor for contents_
   * @return contents_
   */
  string getContents() const;
  /*
   * Accessor for next_node_
   * @return next_node_
   */
  DLNode* getNext() const; 
  
  /*
   * Accessor for previous_node_
   * @return previous_node_
   */
  DLNode* getPrevious() const; 

  //points to the next node in a doubley-linked list
  DLNode* next_node_;  
  //points to previous node in a doubley-linked list
  DLNode* previous_node_;
  //stores the data contents of a SLNode
  string contents_;
};

// REST OF HEADER GUARD GOES HERE
#endif