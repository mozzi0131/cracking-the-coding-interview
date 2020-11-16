#ifndef __CHAP_17_08_HPP__
#define __CHAP_17_08_HPP__

#include <vector>

int getMaxSum(std::vector<int> &vec){
  int maxsum = 0;
  int sum = 0;

  for(int i=0;i<vec.size();i++){
    sum += vec[i];

    if(sum >= maxsum) maxsum = sum;
    if(sum < 0) sum = 0;
  }

  return maxsum;

}

#endif // __CHAP_17_08_HPP__
