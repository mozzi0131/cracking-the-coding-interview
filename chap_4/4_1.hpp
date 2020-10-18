// 4-1. 주어진 이진 트리가 균형 이진 트리인지 판별하는 함수를 작성하세요.
// 이 문제에서 이진트리는 어떤 노드의 두 자식 트리 깊이가 하나 이상 차이나지 않는 트리이다.
#include <algorithm>
#include <cmath>

#include "mytree.h"

// 책의 번역 문제인가? 'balanced' 상태는 높이가 2 이상 차이나지 않는 상태임.
// --> 각자 left/right의 높이를 구한 후 return해주면 됨
int getTreeHeight(BinaryTree *tree){
  if(tree == nullptr) return 0;

  int leftheight = getTreeHeight(tree->left);
  int rightheight = getTreeHeight(tree->right);
  
  // the function will return -1 if the tree is unbalanced
  if(leftheight == -1 || rightheight == -1) return -1;

  if(std::abs(leftheight - rightheight) > 1) return -1;

  // or, if the tree is balanced, it will return it's height
  return std::max(leftheight, rightheight) + 1;
}

bool isBalancedBinaryTree(BinaryTree *tree){
  if(getTreeHeight(tree) == -1) return false;
  return true;
}
