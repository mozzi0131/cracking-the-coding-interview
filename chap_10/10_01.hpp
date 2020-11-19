// 정렬된 배열 a, b가 있다. 
// A의 끝에는 B를 수용하기 충분한 여유 공간이 있다면, 
// B와 A를 정렬된 상태로 병합하는 메서드를 작성하라.

#ifndef __CHAP_10_01_HPP__
#define __CHAP_10_01_HPP__

#include <vector>

// assuming that
// std::vector<int> A(N+M, 0);
// std::vector<int> B(M, 0);
std::vector<int> sortVec(std::vector<int> &A, std::vector<int> &B, int N){
  // 오름차순 정렬이라고 가정
  int bidx = B.size() -1;
  int aidx = N-1;
  int pivot = A.size() - 1;
  
  // B만 정렬이 완료되면 A는 정렬할 필요가 없으니까
  // (A에 합치는 거니, B만 다 들어오면 됨)
  while(bidx >= 0 && aidx >= 0){
    if(B[bidx] >= A[aidx]){
      A[pivot] = B[bidx];
      bidx--;
    } else if(B[bidx] < A[aidx]){
      A[pivot] = A[aidx];
      aidx--;
    }
    pivot--;
  }

  if(bidx > 0){
    while(bidx >= 0){
      A[pivot] = B[bidx];
      pivot--; bidx--;
    }
  }

  return A;
}

#endif // __CHAP_10_01_HPP__
