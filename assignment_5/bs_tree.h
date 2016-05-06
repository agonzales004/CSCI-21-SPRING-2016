/*
 * Name        : bs_tree.h
 * Author      : Anthony Gonzales
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef TREE_H
#define TREE_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "bst_node.h"
#include <sstream>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;

/*
 * Class SLNode.
 * A class that 
 */
class BSTree {
 public:
  /*
   * Default Construcotr
   * Sets root_ to NULL
   * Sets size_ to 0
   */
  BSTree();

  /*
   * Destructor
   * calls clear
   */
  ~BSTree();

  /*
   * calls private function Insert(int, root)
   */
  bool Insert(int content);
  

  /*
   * calls private function Clear(root)
   */
  void Clear();
  
  /*
   * Accessor for size_
   */
  unsigned int size() const;
  
  
 private:
  /*
   * creates a new BSTNode, inserts it into the tree, and returns true
   * if the integer is already in the tree, does not insert, and
   * returns false
   */
  bool Insert(int content, BSTNode*& node); 
  
  /*
   * clears the entire contents of the tree,
   * freeing all memory associated with all nodes
   */
  void Clear(BSTNode*& leaf);
  
  
  /*
   * points to the root node of a binary search tree
   * unsigned int size_ 
   */
   BSTNode* root_;
   
   /*
    * holds the number of nodes in the tree
    */
   unsigned int size_;
};

#endif