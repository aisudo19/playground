#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int max_of (const int a[], int n)
{
  int i;
  int max = a[0];

  for(i = 0; i < n; i++){
    if(a[i] > max){
      max = a[i];
    }
  }
  return max;
}

int main(void){
  int i;
  int *height;
  int n;

  printf("人数");
  scanf("%d", &n);

  height = calloc(n, sizeof(int));
  if(height == NULL){printf("Faild!");}

  srand(time(NULL));
  for(i = 0; i < n; i++){
    height[i] = 100 + rand() % 90;
    printf("%d\n", height[i]);
  }
  printf("max = %d", max_of(height, n));
  free(height);
  return 0;
}
