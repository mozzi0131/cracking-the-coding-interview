#include <vector>

#include "quick_sort.hpp"

int main(){
  std::vector<int> vec = {3, 13, 9, 6, 1, 7, 11};

  quicksort(vec, 0, vec.size()-1);
}
