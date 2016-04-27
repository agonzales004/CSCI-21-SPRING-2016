/*
 * Name        : lab_23.cpp
 * Author      : Anthony Gonzales
 * Description : Trees
 */
#include "bst_node.h"

 /* 
   * Default Construcotr
   * Sets left child to NULL
   * Sets right child to NULL
   * sets contents_ to 0
   */
  BSTNode::BSTNode()
  {
      left_child_ = NULL;
      right_child_ = NULL;
      contents_ = 0;
  }

  /*
   * Default Construcotr
   * Sets left child to NULL
   * Sets right child to NULL
   * sets contents_ to value of parameter
   */
  BSTNode::BSTNode(int contents)
  {
      left_child_ = NULL;
      right_child_ = NULL;
      contents_ = contents;
  } 

  /*
   * Destructor
   * sets left_child to NULL
   * sets right_child to NULL
   */
  BSTNode::~BSTNode()
  {
      left_child_ = NULL;
      right_child_ = NULL;
  }

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  void BSTNode::set_contents(int some_contents)
  {
      contents_ = some_contents;
  }

  /*
   * Accessor for contents_
   * @return contents_
   */
  int BSTNode::contents() const
  {
      return contents_;
  }
  
  /*
   * Accessor for contents_
   * @return contents_
   */
  int& BSTNode::contents()
  {
      return contents_;
  }
  
   /*
   * Mutator for left_child
   * @param BSTNode* some_node to set left_child to
   */
  void BSTNode::set_left_child(BSTNode* some_node)
  {
      left_child_ = some_node;
  }
  
  /*
   * Mutator for right_child
   * @param BSTNode* some_node to set right_child to
   */
  void BSTNode::set_right_child(BSTNode* some_node)
  {
      right_child_ = some_node;
  }

  /*
   * Accessor for left_child
   * @return left_child
   */
  BSTNode* BSTNode::left_child() const
  {
      return left_child_;
  }
  
  /*
   * Accessor for left_child
   * @return left_child
   */
  BSTNode*& BSTNode::left_child()
  {
      return left_child_;
  }
  
  /*
   * Accessor for right_child
   * @return right_child
   */
  BSTNode* BSTNode::right_child() const
  {
      return right_child_;
  }
  
   /*
   * Accessor for right_child
   * @return right_child
   */
  BSTNode*& BSTNode::right_child()
  {
      return right_child_;
  }