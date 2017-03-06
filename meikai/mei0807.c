/*recursive functional call*/

#include <sudio.h>

int functional(int n){
  if(n > 0){
    return n * functional(n - 1)
  }else{
    return 1;
  }
}

int main(void){
  int n;
  printf("input number");
  scanf("%d", &n);

  printf("A:%d\n", functional(n));
  return 0;
}
