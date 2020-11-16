#ifndef __CHAP_17_02_HPP__
#define __CHAP_17_02_HPP__

int arr[101][101];
int N;

bool sameinrow(int N, int x, int user){
  for(int i=0;i<N;i++){
    if(arr[x][i] != user) return false;
  }
  return true;
}

bool sameincol(int N, int y, int user){
  for(int i=0;i<N;i++){
    if(arr[i][y] != user) return false;
  }
  return true;
}

bool sameindiagonal(int N, int user){
  for(int i=0;i<N;i++){
    if(arr[i][i] != user) return false;
  }
  return true;
}

bool sameinreversediagonal(int N, int user){
  for(int i=0;i<N;i++){
    if(arr[i][N-i] != user) return false;
  }
  return true;
}

int hasWon(int N, int user, int x, int y){
  // 가로
  if(sameinrow(N, x, user)) return true;
  // 세로
  if(sameincol(N, y, user)) return true;
  if(x == y){
    // 대각선
    if(sameindiagonal(N, user)) return true;
    // 역대각선
    if(sameinreversediagonal(N, user)) return true;
  }

  return false;
}

// ret value is user's num, or -1
int TicTacToe(int N, int user, int posx, int posy){
  // if user has won, return 1, 
  // if user has losed, return 0.
  // if cannot judge the result, return -1, 

  // 덮어씌우기 같은 invalid한 input은 들어오지 않는다고 가정
  arr[posx][posy] = user;
  
  if(hasWon(N, user, posx, posy)){
    return user;
  } else return -1;
}

#endif // __CHAP_17_02_HPP__
