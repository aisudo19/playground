#include <stdio.h>

void swap (int  *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void sort (int *x, int *y){
  if(*x > *y){
    swap(x, y);
  }
}

int main (void){
  int a, b;
   puts("input two numbers");
   printf("1:"); scanf("%d", &a);
   printf("2:"); scanf("%d", &b);

   sort(&a, &b);

   puts("sort done!");
   return 0;
}
