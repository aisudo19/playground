/*enumeration*/

#include <stdio.h>

enum animal {Dog, Cat, Bird, Invalid};

void dog(void){
  puts("wanwan");
}

void cat(void){
  puts("nya-");
}

void bird(void){
  puts("chun");
}

enum animal select(void){
  int tmp;
  do{
    printf("0:dog 1:cat 2:bird 3:end");
    scanf("%d", &tmp);
  }while(tmp < Dog || tmp > Invalid);

  return tmp;
}

int main(void){
  enum animal selected; /*enum animal型の変数selectedの宣言*/

  do{
    switch(selected = select()){
      case Dog: dog(); break;
      case Cat: cat(); break;
      case Bird: bird(); break;
    }
  }while(selected != Invalid);
  return 0;
}
