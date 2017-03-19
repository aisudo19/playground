#include<iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  if(a > b && b > c){
    std::cout << "YES" << endl;
  } else {
    std::cout << "NO" << endl;
  }
  return 0;
}
