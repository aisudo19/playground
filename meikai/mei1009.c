#include <stdio.h>

int main (void){
  int i;
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a;

  for(i = 0; i < 5; i++){
    printf("%p,%p\n", &a[i], p + i);
  }
  return 0;
}
/*
MBA:meikai akina$ ./a.out
0x7fff5fb21a90,0x7fff5fb21a90
0x7fff5fb21a94,0x7fff5fb21a94
0x7fff5fb21a98,0x7fff5fb21a98
0x7fff5fb21a9c,0x7fff5fb21a9c
0x7fff5fb21aa0,0x7fff5fb21aa0
*/
