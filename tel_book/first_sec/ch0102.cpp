//buble sort
#include <iostream>
using namespace std;

int bubbleSort(int A[], int N){
  int cnt = 0;
  bool flag = 1;
  for(int i = 0; flag; i++){
    flag = 0;
    for(int j = N-1; j > i; j++){
      if(A[j-1] > A[j]){
        swap(A[j-1], A[j]);
        flag = 1;
        cnt++
      }
    }
  }
  return cnt;
}

int main(){
  int A[100], N, cnt;
  cin >> N;
  for(int i = 0; i < N; i++)cin >> A[i];

  cnt = bubbleSort(A,N);

  for(int i = 0; i < N; i++){
    if(i){
      cout << " ";
    }
    cout<< A[i];
  }

  cout << endl;
  cout << cnt << endl;

  return 0;
}
