// inorder traversal
// 왼->가운데->우 순으로 탐색함 

#ifndef __CHAP_4_INORDER_HPP__
#define __CHAP_4_INORDER_HPP__

#include <vector>
#include <iostream>
#include "mytree.h"

void inorder(BinaryTree *node){
  if(node == nullptr) return;

  inorder(node->left);
  std::cout << node->val << std::endl;
  inorder(node->right);
  
  return;
}

#endif __CHAP_4_INORDER_HPP__
