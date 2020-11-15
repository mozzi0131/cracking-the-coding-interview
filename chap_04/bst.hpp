#ifndef __CHAP_4_MY_BST_H__
#define __CHAP_4_MY_BST_H__

#include "mytree.h"

typedef BinaryTree BST;

BST *findNode(BST *node){
  BST *tmp = node;

  while(tmp->left != nullptr){
    tmp = tmp->left;
  }

  return tmp;
}

// wihtout balancing
BST* insertBST(BST *node, int nodeval){
  if(node == nullptr){
    node = new BST(nodeval);
    return node;
  }

  if(node->val > nodeval) node->left = insertBST(node->left, nodeval);
  else node->right = insertBST(node->right, nodeval);

  return node;
}

BST* deleteBST(BST *tree, int val){
  if(tree == nullptr) return nullptr;

  if(tree->val > val) tree->left = deleteBST(tree->left, val);
  else if(tree->val < val) tree->right = deleteBST(tree->right, val);
  else{
    if(tree->left != nullptr && tree->right != nullptr){
      // findNode(tree->left)였으면 완전히 다시 생각해야 할 것 같은데
      // 좀 더 보기
      BST *tmp = findNode(tree->right);
      tree->val = tmp->val;
      tree->right = deleteBST(tree->right, tmp->val);
    }
    else{
      BST *tmp = (tree->left == nullptr) ? tree->right : tree->left;
      delete tree;
      return tmp;
    }
  }
  return tree;
}

#endif // __CHAP_4_MY_BST_H__
