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
    return Insert(content, root_);
     
  }

  /*
   *returns value returned by private function Remove(int, root)
   */
  bool BSTree::Remove(int content)
  {
    Remove(content, root_);
  }
  
  /*
   *if the tree is empty return 0 otherwise return the value
   * returned by private function FindMin(root)
   */
  int BSTree::FindMin()
  {
    FindMin(root_);
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
    * calls private function InOrder(root)
    */
  string BSTree::InOrder()
  {
      return InOrder(root_);
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
  
  /*
   * creates a string of the data in all nodes in the tree, in
   * ascending order separate by spaces (there should be a space 
   * after the last output
   * value)
   */
    
    
   
  string BSTree::InOrder(BSTNode* node)
  {
    std::stringstream ss;
    ss.str();
    
    
    if(node != NULL)
    {
      ss << InOrder(node -> left_child());
      ss << node->contents() << " ";
      ss << InOrder(node -> right_child());
    }

  string someString = ss.str();
  return someString;

  }
  
 /*
   * traverses the tree and removes the node containing the target
   * integer if present and returns true
   * return false if target integer is not in tree (or the tree is empty)
   */
  bool BSTree::Remove(int content, BSTNode*& node)
  {
     if(node == NULL)
     {
       return false;
     }
     else 
     {
       if(node->contents() == content && size_ == 1)                            //checking if root needs to be removed
       {
         delete node;
         node = NULL;
         size_ = 0;
         return true;
       }
       else if(content < node->contents())                                       //if less than node traverse to the left
       {
         Remove(content, node->left_child());
       }
       else if(content > node->contents())                                       //if greater than node traverse to the right
       {
         Remove(content, node->right_child());
       }
       else                                                                     //if the node is equal to content
       {
         if(node->left_child() == NULL && node->right_child() == NULL)           //if the node to remove has no left/right child
         {
           delete node;
           node = NULL;
         }
         else if(node->left_child() == NULL)                                     //node to be removed has a right subtree
         {
           BSTNode* temp = node;
           node = node->right_child();
           delete temp;
         }
         else if(node->right_child() == NULL)                                    //node to be removed has a left subtree
         {
           BSTNode* temp = node;
           node = node->left_child();
           delete temp;
         }
         else if(root_->contents() == node->contents())
         {
            BSTNode* temp = new BSTNode(FindMin(node->left_child()));
            node->set_contents(temp->contents());
            delete temp;
            node->left_child() = NULL;
         }
         else
         {
           BSTNode* temp = new BSTNode(FindMin(node->right_child()));
           node->set_contents(temp->contents());
           delete temp;
         }
         size_--;
         return true;
       }  
     }
  }
  
  /*
   * returns the value of the smallest node in the tree
   * helper function for private Remove()
   */
  int BSTree::FindMin(BSTNode* minNode) const
  {
    if(size_ > 0)
    {
     while(minNode->left_child() != NULL)
      {
        minNode = minNode->left_child();
      }
       return minNode->contents();
     }
     else
      return 0;
  }
  