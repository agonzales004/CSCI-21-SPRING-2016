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
class BSTNode {
 public:
  /*
   * Default Construcotr
   * Sets left child to NULL
   * Sets right child to NULL
   * sets contents_ to 0
   */
  BSTNode();

  /*
   * Default Construcotr
   * Sets left child to NULL
   * Sets right child to NULL
   * sets contents_ to value of parameter
   */
  BSTNode(int contents);

  /*
   * Destructor
   * sets left_child to NULL
   * sets right_child to NULL
   */
  ~BSTNode();

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
   * Accessor for contents_
   * @return contents_
   */
  int& contents();
  
   /*
   * Mutator for left_child
   * @param BSTNode* some_node to set left_child to
   */
  void set_left_child(BSTNode* some_node);
  
  /*
   * Mutator for right_child
   * @param BSTNode* some_node to set right_child to
   */
  void set_right_child(BSTNode* some_node);

  /*
   * Accessor for left_child
   * @return left_child
   */
  BSTNode* left_child() const;
  
  /*
   * Accessor for left_child
   * @return left_child
   */
  BSTNode*& left_child();
  
  /*
   * Accessor for right_child
   * @return right_child
   */
  BSTNode* right_child() const;
  
   /*
   * Accessor for right_child
   * @return right_child
   */
  BSTNode*& right_child();


 private:
  //points to a left child
  BSTNode* left_child_; 
  //points to a right child
  BSTNode* right_child_;
  //stores the data contents of BSTNode
  int contents_;
};

#endif