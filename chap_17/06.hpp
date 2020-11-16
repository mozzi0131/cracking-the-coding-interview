#ifndef __CHAP_17_06_HPP__
#define __CHAP_17_06_HPP__

#include <vector>

int findLeftSub(std::vector<int> &vec){
  for(int i=0;i<vec.size()-1;i++)
    if(vec[i] > vec[i+1]) return i;
  return vec.size()-1;
}

int findRightSub(std::vector<int> &vec){
  for(int i=vec.size() -1; i > 0 ; i--){
    if(vec[i] < vec[i-1]) return i;
  }
  return 0;
}

int cutLeft(std::vector<int> &vec, int leftLast, int minidx){
  for(int i=0;i<leftLast;i++){
    if(vec[i] > vec[minidx]) return i;
  }
  return leftLast;
}

int cutRight(std::vector<int> &vec, int rightStart, int maxidx){
  for(int i=vec.size() -1; i>= rightStart; i--){
    if(vec[i] < vec[maxidx]) return i;
  }
  return rightStart;
}

std::pair<int, int> findPos(std::vector<int> &vec){
  //전처리 수행
  int leftLast = findLeftSub(vec);
  int rightStart = findRightSub(vec);

  int startidx = leftLast + 1;
  if(startidx >= vec.size()) return std::make_pair(0, vec.size()-1);

  int mid_minidx = startidx; int mid_maxidx = startidx;
  for(int i=startidx;i<rightStart;i++){
    if(vec[i] < vec[mid_minidx]) mid_minidx = i;
    if(vec[i] > vec[mid_maxidx]) mid_maxidx = i;
  }
  
  int finalLeft = cutLeft(vec, leftLast, mid_minidx);
  int finalRight = cutRight(vec, rightStart, mid_maxidx);

  return std::make_pair(finalLeft, finalRight);
}

#endif // __CHAP_17_06_HPP__
