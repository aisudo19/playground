#include <stdio.h>

int main (void){
  int i;
  char a[][5] = {"amazarashi", "YUKI", "burnout"};
  char *p[] = {"spring", "summer", "winter"};

  for(i = 0; i < 3; i++)
    printf("%s\n", a[i]);
  for(i = 0; i < 3; i++)
    printf("%s\n", p[i]);

    return 0;
}
/*
配列による文字列の　　　配列
ポインタによる文字列の　配列
*/
