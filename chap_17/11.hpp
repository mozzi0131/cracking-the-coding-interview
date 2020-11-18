#ifndef __CHAP_17_11_HPP__
#define __CHAP_17_11_HPP__

// rand5 : 0 ~ 4까지의 양수를 random으로 생성함
int rand5();

int rand7(){
  // I have to use only rand5()
  while(true){
    int num = rand5() * 5 + rand5();
    if(num < 21) return num % 7;
  }
}

#endif // __CHAP_17_11_HPP__
