/*直角三角形の表示
値を返さない関数　手続き型*/

#include <stdio.h>

void put_chars(int ch, int n){
  while(n-- > 0)
    putchar(ch);
}

int main(void){

  int i, len;
  printf("input a short side:");
  scanf("%d", &len);

  for(i = 1; i <= len; i++){
    put_chars(' ', len - i);
    put_chars('*', i);
    putchar('\n');
  }
  return 0;
}
