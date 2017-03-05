#include <stdio.h>

#define NUM 5

void bsort(int a[], int n){
  int i, j;

  for (i = 0; i < n - 1; i++){
    for(j = n -1; j > i ; j--){
      if(a[j-1] > a[j]){
        int tmp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = tmp;
      }
    }
  }
}

int main(void){
  int i;
  int x[NUM];

  printf("%dの整数を入力", NUM);
  for(i = 0; i < NUM; i++){
    printf("%2d:", i + 1);
    scanf("%d", &x[i]);
  }

    bsort(x, NUM);
    puts("sort done!");

    for(i = 0; i < NUM; i++){
      printf("%d\n", x[i]);
    }

    return 0;
  }
