/*
 * Name        : lab_15.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "sl_node.h"

  /*
   * Default Construcotr
   * Sets next_node_ to NULL
   * sets contents_ to 0
   */
  SLNode::SLNode()
  {
     next_node_ = NULL;
     contents_ = 0;
  }
         
  /*
   * Overloaded Constructor
   * int parameter assigned to contents_
   * sets next_node to NULL
   */
  SLNode::SLNode(int contents)
  {
      contents_ = contents;
      next_node_ = NULL;
  }

  SLNode::~SLNode()
  {
      
  }

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  void SLNode::set_contents(int some_contents)
  {
      contents_ = some_contents;
  }

  /*
   * Accessor for contents_
   * @return contents_
   */
  int SLNode::contents() const
  {
      return contents_;
  }
  
   /*
   * Mutator for next_node_
   * @param SLNode* some_node to set next_node_ to 
   */
  void SLNode::set_next_node(SLNode* some_node)
  {
      next_node_ = some_node;
  }

  /*
   * Accessor for next_node_
   * @return next_node_
   */
  SLNode* SLNode::next_node() const
  {
      return next_node_;
  }



//int main(){}