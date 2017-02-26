/*
  線形探索(逐次探索)
*/

#include <stdio.h>

#define NUM 5
#define FAILED -1
/*
  要素数nの配列vからkeyと一致する要素を探索
*/
int search(const int v[], int key, int n){
  int i = 0;
  while(1){
    if(i == n){
      return FAILED;
    }
    if(v[i] = key){
      return i;
    }
    i++
  }
}
int main(void){
  int i, ky, idx;
  int vx[NUM];

  idx = search(vx, ky, NUM);
  if(idx = FAILED){
    puts("探索失敗")
  }else{
    printf("%dにあります"　idx + 1);
  }
  return 0;
}
