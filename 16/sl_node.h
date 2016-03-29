/*
 * Name        : sl_node.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

/*
 * Class SLNode.
 * A class that 
 */
class SLNode {
 public:
  /*
   * Default Construcotr
   * Sets next_node_ to NULL
   * sets contents_ to 0
   */
  SLNode();

  /*
   * Overloaded Constructor
   * int parameter assigned to contents_
   * sets next_node to NULL
   */
  SLNode(int contents);

  /*
   * Destructor
   */
  ~SLNode();

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  void set_contents(int some_contents);

  /*
   * Accessor for contents_
   * @return contents_
   */
  int contents() const;
  
   /*
   * Mutator for next_node_
   * @param SLNode* some_node to set next_node_ to 
   */
  void set_next_node(SLNode* some_node);

  /*
   * Accessor for next_node_
   * @return next_node_
   */
  SLNode* next_node() const; 


 private:
 //points to the next node in a singly-linked list
  SLNode* next_node_;  
  //stores the data contents of a SLNode
  int contents_;
};

// REST OF HEADER GUARD GOES HERE
#endif