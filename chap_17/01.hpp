#ifndef __CHAP_17_01_HPP__
#define __CHAP_17_01_HPP__

// Assuming that the both number is int
void switchNumber(int &a, int &b){
  a = a - b;
  b = a + b;
  a = b - a;
}

/*
 * c++의 경우, enum/int형 외에는 ^ 연산을 수행할 수 없음.
 * java는 되나?
 * void switchNumber(double &a, double &b){
 *   a = a ^ b;
 *   b = a ^ b;
 *   a = a ^ b;
 * }
*/

#endif // __CHAP_17_01_HPP__
