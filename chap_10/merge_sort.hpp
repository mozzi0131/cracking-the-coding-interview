// merge sort
// : 반씩 나눠가면서 정렬한 다음 합침.
// 이 때 right side는 합칠 필요가 없는데, 이미 올바른 곳에 있기 때문

#ifndef __CHAP_10_MERGE_SORT__
#define __CHAP_10_MERGE_SORT__

#include <vector>

using namespace std;

void merge(vector<int> &vec, int left, int mid, int right){
  vector<int> tmp(vec);

  int helperLeft = left;
  int helperRight = mid+1;

  int current = left;

  while(helperLeft <= mid && helperRight <= right) {
    if(tmp[helperLeft] <= tmp[helperRight])
      vec[current++] = tmp[helperLeft++];
    else
      vec[current++] = tmp[helperRight++];
  }

  int remaining = mid - helperLeft;
  for(int i=0;i<=remaining;i++)
    vec[current+i] = tmp[helperLeft+i];

}


void mergesort(vector<int> &vec, int left, int right){
  if(left > right) return;
  
  int mid = (left+right)/2;

  // sort left
  mergesort(vec, left, mid);
  // sort right
  mergesort(vec, mid+1, right);

  merge(vec, left, mid, right);
}

#endif // __CHAP_10_MERGE_SORT__
