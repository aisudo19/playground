/*
【苦C13章】
配列のコピー

memcpy(コピー先配列名､コピー元配列名、配列全体のサイズ)
*/
#include <stdio.h>
#include <memory.h>

int main(void)
{
  int array1[] = {43, 5, 6, 75, 653, 7, 7};
  int array2[] = {1, 2, 3, 4, 5};
  int i;

  for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++){
    printf("array2[%d] = %d\n",i,array2[i]);
  }
  /*
  array1 の全要素を array2 にコピー
  for(i = 0; i < sizeof(array2) / sizeof(array2[0]); i++){
    array2[i] = array1[i];
  }
*/
  memcpy(array2,array1,sizeof(array1));
  for (i = 0; i < sizeof(array2) / sizeof(array2[0]);i++) {
		printf("array2[%d] = %d\n",i,array2[i]);
	}
}
