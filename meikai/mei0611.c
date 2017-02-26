/*汎用性↑*/
#include <stdio.h>

#define NUM 5

int max_of(const int v[],int n){
  int i;
  int max = v[0];

  for(i = 0; i < n; i++){
    if(max < v[i]){
      max = v[i];
    }
  }
  return max;
}

int main(void){
  int x[NUM];
  int y[NUM];
  int max_e max_m;

  max_e = max_of(x, NUM);
  max_m = max_of(y, NUM);

}
