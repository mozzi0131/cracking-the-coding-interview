// quick sort
// pivot 값을 기준으로 왼쪽에는 pivot보다 작은 값, 
// 오른쪽에는 pivot보다 큰 값을 밀어두면 이후에 pivot 기준으로는
// 왼쪽과 오른쪽은 서로 비교할 필요가 없음.

#ifndef __CHAP_10_QUICK_SORT__
#define __CHAP_10_QUICK_SORT__

#include <vector>
#include <iostream>

using namespace std;

int partition(vector<int> &vec, int left, int right){
  int index = vec[(left+right)/2];

  while(left <= right){
    while(vec[left] < index) left++;
    while(vec[right] > index) right--;

    if(left <= right){
      int tmp = vec[left];;
      vec[left] = vec[right];
      vec[right] = tmp;
      left++; right--;
    }
  }

  return left;
}

void quicksort(vector<int> &vec, int left, int right){
  int pivot = partition(vec, left, right);
  std::cout << "in left, right : " << left << ", " << right <<", the pivot is " << pivot << std::endl;
  if(left < pivot - 1) quicksort(vec, left, pivot-1);
  if(right > pivot) quicksort(vec, pivot, right);

  std::cout << "left is " << left << " and right is " << right << std::endl;
  for(int i=left;i<=right;i++){
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

#endif // __CHAP_10_QUICK_SORT__
