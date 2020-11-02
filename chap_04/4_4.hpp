// 주어진 이진 트리에서 깊이별로 연결 리스트를 만들어 내는 알고리즘을 작성하라.

#include <vector>
#include <list>

#include "mytree.h"

void exploreTree(BinaryTree *tree, std::vector<std::vector<BinaryTree *>> &list, int level){
  if(tree == nullptr) return;

  std::vector<BinaryTree *> tmp;
  
  // list가 본 높이만큼 있는 경우, list.size() == level+1이어야 함.
  // 따라서 list.size() == level인 경우는 아직 해당 높이가 리스트에 없는 경우임!
  if(list.size() == level){
    list.push_back(tmp);
  }

  list[level].push_back(tree);

  exploreTree(tree->left, list, level+1);
  exploreTree(tree->right, list, level+1);
}

std::vector<std::vector<BinaryTree *>> createList(BinaryTree *tree){
  std::vector<std::vector<BinaryTree *>> ans;

  exploreTree(tree, ans, 0);

  return ans; 
}
