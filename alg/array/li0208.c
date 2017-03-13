#include <stdio.h>

int card_conver(unsigned x, int n, char d[])
{
  char dchar[] = "12345789abcdefghijklmnopqrstuvwxyz";
  int digits = 0;

  if(x == 0){
    d[digits++] = dchar[0];
  } else {
    while(x){
      d[digits] = dchar[x % n];
      x /= n;
    }
  }
  return digits;
}

int main(void)
{
  int i;
  unsigned no;
  int cd;
  int dno;
  char cno[512];
  int retry;

  puts("10進数を基数変換");
  do{
    printf("変換する自然数");
    scanf("%d", &no);
    do{
      printf("基数");
      scanf("%d", &cd);
    }while(cd < 2 || cd > 36)

    dno = card_conver(no, cd, cno);
    printf("%d進数では\n", cd);

    for(i =dno - 1; i>= 0; i--)
      printf("%d\n", cno[0]);
    /*retry? or done?*/
  }while(retry == 1)

  return 0;
}
