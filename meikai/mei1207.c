#include <stdio.h>
#include <string.h>

#define NUM 5
#define NAME_LEN 64

typedef struct {
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
}Student;

void swap_Student(Student *x, Student *y)
{
  Student tmp = *x;
  *x = *y;
  *y = tmp;
}

void sort_by_height(Student a[], int n)
{
  int i, j;
  for(i = 0; i < n - 1; i++){
    for(j = n - 1; j > i; j--){
      if(a[j-1].height > a[j].height){
        swap_Student(&a[j-1], &a[j]);
      }
    }
  }
}

int main(void)
{
  int i;
  Student std[] = {
    {"A", 165, 51.5, 9000},
    {"B", 140, 55.5, 8000},
    {"C", 156, 53.5, 4000},
    {"D", 190, 54.5, 9000},
    {"E", 145, 85.5, 0},
  };

  for(i = 0; i < NUM; i++){
    printf("%-8s %6d%6.1f%7ld\n",
      std[i].name, std[i].height, std[i].weight, std[i].schols);
  }

  sort_by_height(std, NUM);
  puts("sort done");

  for(i = 0; i < NUM; i++){
    printf("%-8s %6d%6.1f%7ld\n",
      std[i].name, std[i].height, std[i].weight, std[i].schols);
  }
}
