#ifndef __CHAP_4_MYTREE_H__
#define __CHAP_4_MYTREE_H__

struct BinaryTree {
  int val;
  BinaryTree *left;
  BinaryTree *right;
  
  BinaryTree () {
    val = -1;
    left = nullptr;
    right = nullptr;
  }
  
  BinaryTree (int tmpval) {
    val = tmpval;
  }

  ~BinaryTree(){
    if(left) delete left;
    if(right) delete right;
  }
};

#endif // __CHAP_4_MYTREE_H__
