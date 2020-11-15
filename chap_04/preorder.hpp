// preorder
// root -> left -> right 순으로 탐색

#ifndef __CHAP_4_POSTORDER_HPP__
#define __CHAP_4_POSTORDER_HPP__

#include <iostream>
#include "mytree.h"

void preorder(BinaryTree *tree){
  if(tree == nullptr) return;
  
  std::cout << tree->val << std::endl;
  preorder(tree->left);
  preorder(tree->right);
}

#endif // __CHAP_4_POSTORDER_HPP__
