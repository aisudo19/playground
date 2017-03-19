#include <iostream>

int main(){
  int a, b;
  std::cin >> a >> b;
  if(a > b){std::cout << "a > b" << '\n';}
  else if(b > a){std::cout << "a < b" << '\n';}
  else if(a == b){std::cout << "a == b" << '\n';}
  else{std::cout << "invailed" << '\n';}

  return 0;
}
