#include <stdio.h>

int scan_print(void){
  int tmp;
  /**/
  return tmp;
}

int rev_int(int num){
  int tmp = 0;
  if(num > 0){
    do{
      tmp = tmp * 10 + num % 10
      num  /= 10
    }while(num > 0);
  }
  return tmp;
}

int main(void){
  int nx = scan_print();
  printf(%d, rev_int(nx));

  return0;
}
