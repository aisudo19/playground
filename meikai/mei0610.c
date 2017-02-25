/*
file scope
function prototype declaration;
★順
*/
#include <stdio.h>

#define NUM 5

int score[NUM];

int top(void);

int main(void){
  extern int score[];
  int i;
  /*for roop score input*/
  printf("%d", top());
}

int top(void){
  extern int score[];
  int i;
  int max = score[0];

  for (i = 0; i < NUM; i++){
    if(score[i] > max){
      max = score[i];
    }
  }
}
