#include <iostream>
#include <algorithm>

int n;
int a[10010];//多めにとる

int dp[10010];

int main(){
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];

    dp[0]=0;//漸化式の初期値
    for(int i=0; i<n; i++){
        dp[i+1]=max(dp[i],dp[i]+a[i]);
    }
    cout<<dp[n]<<endl;
    return 0;
}