//キューの先頭インデックスは必ずしも0でない
//head~tail-1

#include <stdio.h>
#include <string.h>

/*プロセスを表す構造体*/
typedef struct pp{
  char name[100];
  int t;//time
}P;

P Q[LEN];
int head, tail, n;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1) % LEN;
}

P dequeu(){
  P x = Q[head];
  head = (head + 1) % LEN;
  return x;
}

int min(int a, int b){
  return a < b ? a : b;
}

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf(%d %d, &n, &q)

  //プロセスをキューに追加してく
  for(i = 0; i <= n; i++){
    scanf(%s, Q[i].name);
    scanf(%s, &Q[i].t);
  }
  head = 1;
  tail = n + 1;

  //シュミレーション
  while(head != tail){
    u = dequeu();
    c = min(q, u.t);
    u.t -= c;
    elaps += c;
    if(u.t > 0){
      enqueue(u);
    }else{
      printf("%s %d\n",u.name, elaps);
    }
  }
  return 0;
}
