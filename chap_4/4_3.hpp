// 오름차순으로 정렬된 배열로부터 그 높이가 가장 낮은 이진 탐색 트리를 생성하는
// 알고리즘을 작성하여라. 배열 내 모든 원소는 배열 내에서 유일한 값을 갖는다.

#include "mytree.h"

#define MAX_SIZE 100

// assuming that I got the start and end index
BinaryTree* createBST(int (&arr)[MAX_SIZE+2], int start, int end){
  if(end < start) return nullptr;

  // get the mid
  int mid = (start+end)/2;

  BinaryTree *tree = new BinaryTree(arr[mid]);
  tree->left = createBST(arr, start, mid-1);
  tree->right = createBST(arr, mid+1, end);

  return tree;
}
