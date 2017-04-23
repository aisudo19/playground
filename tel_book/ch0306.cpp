//シェルソート途中　もどって仕上げておこー

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

long long cnt;
int l;
int A[10000000];
int n;
vector<int> G;

//間隔Gを指定した挿入ソート
void isetionSort(int A[], int n, int g){
  for(int i = g; i < n; i++){
    int v = A[i];
    int j = i - g;
    while(j >= 0 && A[j] > v){
      A[j + g] = A[j];
      j -= g;
      cnt++;
    }
    A[j + g] = v;
  }
}
