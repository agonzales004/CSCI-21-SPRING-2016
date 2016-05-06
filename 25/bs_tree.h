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
   * Sets size_ to NULL
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
   *returns value returned by private function Remove(int, root)
   */
  bool Remove(int content);
  
  /*
   *if the tree is empty return 0 otherwise return the value
   * returned by private function FindMin(root)
   */
  int FindMin();

  /*
   * calls private function Clear(root)
   */
  void Clear();
  
  /*
   * Accessor for size_
   */
  unsigned int size() const;
  
   /*
    * calls private function InOrder(root)
    */
  string InOrder();
  
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
   * creates a string of the data in all nodes in the tree, in
   * ascending order separate by spaces (there should be a space 
   * after the last output
   * value)
   */
  string InOrder(BSTNode* node);
  
  /*
   * traverses the tree and removes the node containing the target
   * integer if present and returns true
   * return false if target integer is not in tree (or the tree is empty)
   */
  bool Remove(int content, BSTNode*& node);
  
  /*
   * returns the value of the smallest node in the tree
   * helper function for private Remove()
   */
  int FindMin(BSTNode* minNode) const;
  
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