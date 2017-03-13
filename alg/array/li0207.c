#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;}while(0)

void ary_reverse(int a[], int n)
{
  int i;
  for(i = 0; i < n / 2; i++)
    swap(int, a[i], a[n - 1 - i]);
}

int main(void)
{
  int i;
  int *x;
  int n;

  printf("number of item");
  scanf("%d", &n);
  x = calloc(n, sizeof(int));
  if (x == NULL)
    printf("Faild!");

  srand(time(NULL));
  for(i = 0; i < n; i++){
    x[i] = (rand() % 100);
    printf("%d\n", x[i]);
  }

  ary_reverse(x, n);
  printf("Done");

  for(i = 0; i < n; i++){
    printf("%d\n", x[i]);
  }

  return 0;
}
