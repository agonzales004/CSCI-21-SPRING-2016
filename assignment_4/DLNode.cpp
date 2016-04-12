/*
 * Name        : lab_15.cpp
 * Author      : Anthony Gonzales
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "DLNode.h"
  /*
   * Default Construcotr
   * Sets next_node_ to NULL
   * Sets previous_node_ to NULL
   * sets contents_ to 0
   */
  DLNode::DLNode()
  {
     next_node_ = NULL;
     previous_node_ = NULL;
     contents_ = 0;
  }

  /*
   * Overloaded Constructor
   * int parameter assigned to contents_
   * sets next_node to NULL
   * sets previous_node_ to NULL
   */
  DLNode::DLNode(int contents)
  {
      contents_ = contents;
      next_node_ = NULL;
      previous_node_ = NULL;
  }

  /*
   * Destructor
   * does nothing
   */
  DLNode::~DLNode()
  {
      
  }

  /*
   * Mutator for contents_
   * @param int some_contents to set contents_ to
   */
  void DLNode::setContents(int newContents)
  {
      contents_ = newContents;
  }

   /*
   * Mutator for next_node_
   * @param SLNode* some_node to set next_node_ to 
   */
  void DLNode::setNext(DLNode* newNext)
  {
      next_node_ = newNext;
  }

   /*
   * Mutator for previous_node_
   * @param DLNode* newPrevious to set previous_node to
   */
  void DLNode::setPrevious(DLNode* newPrevious)
  {
      previous_node_ = newPrevious;
  }

  /*
   * Accessor for contents_
   * @return contents_
   */
  int DLNode::getContents() const
  {
      return contents_;
  }
  /*
   * Accessor for next_node_
   * @return next_node_
   */
  DLNode* DLNode::getNext() const
  {
      return next_node_;
  }
  
  /*
   * Accessor for previous_node_
   * @return previous_node_
   */
  DLNode* DLNode::getPrevious() const
  {
      return previous_node_;
  }
  
 