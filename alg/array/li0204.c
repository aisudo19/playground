#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int *a;
  int n;

  a = calloc(n, sizeof(int));

  if(a == NULL){
    puts("Faild!");
  } else {
    printf("input number for %d times\n", n);
    for(i = 0; i < n; i++){
      scanf("%d\n", &a[i]);
    }
  }

  for(i = 0; i < n; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }
  free(a);
}
