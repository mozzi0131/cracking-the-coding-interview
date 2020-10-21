// 주어진 유향 그래프에서 특정한 두 노드 간에 경로가 존재하는지를 
// 판별하는 알고리즘을 작성하여라.

#include <queue>
#include <vector>

#define MAX_POINT 100

int visited[MAX_POINT+2];

// Assuming that the point's value is from 1 to N.
bool isLinked(int p1, int p2, std::vector<int> (&graph)[MAX_POINT+2]){
  std::queue<int> bfsQ;

  bfsQ.push(p1);
  visited[p1] = true;

  while(!bfsQ.empty()){
    int nowP = bfsQ.front();
    bfsQ.pop();

    for(auto nextP : graph[nowP]){
      if(nextP == p2) return true;
      if(visited[nextP]) continue;
      visited[nextP] = true;
      bfsQ.push(nextP);
    }
  }

  return false;
}
