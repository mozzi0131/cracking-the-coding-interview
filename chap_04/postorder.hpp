// postorder
// left -> right -> self

#ifndef __CHAP_4_POSTORDER_HPP__
#define __CHAP_4_POSTORDER_HPP__

#include <iostream>
#include "mytree.h"

void postorder(BinaryTree *tree){
  if(tree == nullptr) return;

  postorder(tree->left);
  postorder(tree->right);
  
  std::cout << tree->val << std::endl;
}

#endif // __CHAP_4_POSTORDER_HPP__
