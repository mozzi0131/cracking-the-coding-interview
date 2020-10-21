// selection sort
// 최소/최댓값 하나만 정하고 한번씩만 sorting 진행하기

#ifndef __CHAP_10_SELECTION_SORT__
#define __CHAP_10_SELECTION_SORT__

#include <vector>

using namespace std;

void selectionsort(vector<int> &vec){
  int minval = 987654321;
  int minIdx = -1;

  for(int i=0;i<vec.size();i++){
    minval = 987654321;
    minIdx = -1;
    for(int j=i;j<vec.size();j++){
      if(minval >= vec[j]){
        minval = vec[j];
        minIdx = j;
      }
    }

    if(minIdx != -1){
      int tmp = vec[i];
      vec[i] = vec[minIdx];
      vec[minIdx] = tmp;
    }
  }
}

#endif // __CHAP_10_SELECTION_SORT__
