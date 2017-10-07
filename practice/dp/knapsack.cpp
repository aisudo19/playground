//これだけじゃ情報足りない→添字を加える

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//入力
int n,W;
int weight[110], value[110];

//DPテーブル
int dp[110][10010];

int main(){
    //入力
    cin>>n>>W;
    for(int i=0; i<n; i++)cin>>value[i]>>weight[i];

    //DP初期条件 dp[0][w]=0/0こ品物から選んだ。wg越えないように(のこり)
    for(int w=0; w<)
}