/*
 * Name        : assignment5
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
    return Insert(content, root_);
     
  }


  /*
   * calls private function Clear(root)
   */
  void BSTree::Clear()
  {
        Clear(root_);
  }
  
  /*
   * Accessor for size_
   */
  unsigned int BSTree::size() const
  {
      return size_;
  }
  

  /*
   * creates a new BSTNode, inserts it into the tree, and returns true
   * if the integer is already in the tree, does not insert, and
   * returns false
   */
  bool BSTree::Insert(int content, BSTNode*& leaf)
  {
    if(leaf == NULL)
    {
      leaf = new BSTNode(content);
      size_ ++;
      return true;
    }
    else if(content < leaf-> contents())
    {
     Insert(content, leaf->left_child());
    }
    else if(content > leaf-> contents())
    {
     Insert(content, leaf->right_child());
    }
    else if(content == leaf->contents())
    {
      return false;
    }
  }
  
  /*
   * clears the entire contents of the tree,
   * freeing all memory associated with all nodes
   */
  void BSTree::Clear(BSTNode*& leaf)
  {
      if(leaf != NULL)
      {
        Clear(leaf->left_child());
        Clear(leaf->right_child());
        delete leaf;
        leaf = NULL;
      }
      size_ = 0;
  }
  
