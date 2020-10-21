// bubble sort
// 하나하나 비교하면서 차이나면 옮기기
// O(N^2)

#ifndef __CHAP_10_BUBBLE_SORT__
#define __CHAP_10_BUBBLE_SORT__

#include <vector>

using namespace std;

void bubblesort(vector<int> &vec){

  for(int i=0;i<vec.size()-1;i++){
    for(int j=i+1;j<vec.size();j++){
      if(vec[i] > vec[j]){
        int tmp = vec[i];
        vec[i] = vec[j];
        vec[j] = tmp;
      }
    }
  }
}

#endif // __CHAP_10_BUBBLE_SORT__
