/*
 * Name        : lab_24.cpp
 * Author      : Anthony Gonzales
 * Description : Trees
 */
#include "bs_tree.h"


  /*
   * Default Construcotr
   * Sets root_ to NULL
   * Sets size_ to 0
   */
  BSTree::BSTree()
  {
      root_ = NULL;
      size_ = 0;
  }

  /*
   * Destructor
   * calls clear
   */
  BSTree::~BSTree()
  {
      Clear();
  }

  /*
   * calls private function Insert(int, root)
   */
  bool BSTree::Insert(int content)
  {
      
  }

  /*
   * calls private function Clear(root)
   */
  void BSTree::Clear()
  {
      
  }
  
  /*
   * Accessor for size_
   */
  unsigned int BSTree::size() const
  {
      return size_;
  }
  
   /*
    * calls private function InOrder(root)
    */
  string BSTree::InOrder()
  {
      InOrder(root_);
  }
 
  /*
   * creates a new BSTNode, inserts it into the tree, and returns true
   * if the integer is already in the tree, does not insert, and
   * returns false
   */
  bool BSTree::Insert(int content, BSTNode& node)
  {
      
  }
  
  /*
   * clears the entire contents of the tree,
   * freeing all memory associated with all nodes
   */
  void BSTree::Clear(BSTNode& node)
  {
      
  }
  
  /*
   * creates a string of the data in all nodes in the tree, in
   * ascending order separate by spaces (there should be a space 
   * after the last output
   * value)
   */
  string BSTree::InOrder(BSTNode* node)
  {
      
  }
  
