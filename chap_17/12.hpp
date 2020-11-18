#ifndef __CHAP_17_12_HPP__
#define __CHAP_17_12_HPP__

#include <vector>
#include <algorithm>

int returnPossiblePair(std::vector<int> &vec, int K){
  int ans = 0;

  std::sort(vec.begin(), vec.end());

  int left = 0; int right = vec.size() -1;

  while(left < right){
    if(vec[left] + vec[right] == K){
      ans++;
      // 중복 없는 경우에만 사용할 수 있을 듯한?
      right--; left++;
    }
    else{
      if(vec[left] + vec[right] > K) right--;
      else left++;
    }
  }
  return ans;
}

#endif // __CHAP_17_12_HPP__
