#include<iostream>
#include<string>
#include<cmath>

using namespace std;

main(){
  int n, A[100];

  while(1){
    cin >> n;
    if(n == 0)break;

    int sum = 0;

    for(int i= 0; i < n; i++){
      cin >> A[i];
      sum += A[i];
    }
    double avg = 1.0*sum/n;
    double dist = 0.0;

    for(int i = 0; i < n; i++){
      dist += (avg - A[i])*(avg - A[i]);
    }
    printf("%lf\n", sqrt(dist/n));
  }
}
