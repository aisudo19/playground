#include<iostream>

using namespace std;

#define MAX 100005
#define NIL -1


struct Node{int p, l, r;};//最も左の子&右隣の兄弟

Node T[MAX];
int n, D[MAX];

void print(int u){
    int i,c;
    
    cout<<"node"<<u;
    cout<<"parent="<<T[u].p;
    cout<<"depth="<<D[u];

    if(T[u].p == NIL)cout<<"this node is root";
    else if(T[u].l == NIL)cout<<"this node is leaf";
    else cout<<"this node is internal node";

    cout<<"[child=";
    for(i=0, c=T[u].l; c!=NIL; i++, c=T[c].r){
        if(i)cout<<",";
        cout<<c;
    }
    cout<<"]"<<endl;
}

int rec(int u, int p){//start(r,0)rは親なし
    D[u]=p;
    if(T[u].r!=NIL)rec(T[u].r,p);//third(4,1)
    if(T[u].l!=NIL)rec(T[u].l,p+1);//sec(1,1)third(2,2)
    return 0;
}

int main(){
    int i,j;//indent
    cin>>n;
    for(i=0; i<n; i++)T[i].p=T[i].l=T[i].r=NIL;//初期化



    int v,d,c,l,r;
    //v=node番号,d=子供の数,c=子供番号,l=子供名前
    for(i=0;i<n;i++){//input行毎動く
        cin>>v>>d;

        for(j=0;j<d;j++){//input子供番号
            cin>>c;
            if(j==0){
                T[v].l=c;//一番初めなので最左子
            }else{
                T[l].r=c;//lの最右兄弟(最左子から順にループ↓)
            }
            l=c;//最左子から順にループ↑
            T[c].p=v;
        }
    }


    for(i=0; i<n; i++){
        if(T[i].p==NIL)r=i;//rをpがNILをrecに渡す
    }
    rec(r,0);//D[]を埋める


    for(i=0;i<n;i++)print(i);
    return 0;
}