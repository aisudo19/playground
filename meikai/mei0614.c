/*
  逐次探索(番兵法)
*/

#include<stdio.h>

#define NUM 5;
#define FAILED -1;
/*
  要素数nの配列vからkeyと一致する要素を探索
*/

int search(int v[], int key, int n){
  int i = 0;
  v[n] = key; /*番兵格納*/
/*
  while(1){
    if(v[i] = key)
      break;
    i++
  }
*/
for(i = 0; v[i] != key; i++)
  ;
  return(i < n) ? i : FAILED;
}

int main (void){
  int i, ky, idx;
  int vx[NUM + 1];

  for(i = 0; i < NUM; i++){
    printf("vx[%d]:", i);
    scanf("%d", &vx[i]);
  }
  printf("serch number?");
  scanf("%d", &ky);

  if((idx = serch(vx, ky, NUM)) == FAILED){
    printf("FAILED!");
  }else{
    printf("SUCCEED! NO.%d", idx + 1);
  }
}
