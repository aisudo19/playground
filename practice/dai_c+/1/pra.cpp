#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<stack>

using namespace std;

typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;

int main(){
    int m,tmp;
    string str;

    cin>>m;
    while(m--){
        stack<int> st;

        for(;;){
            cin>>str;
            if(str=="push"){
                cin>>tmp;
                st.push(tmp);
            }else if(str=="pop"){
                if(st.empty())continue;
                else st.pop();
            }
            else if(str=="end"){
                break;
            }
        }

        if(st.empty()){
            cout<<"stack is empty"<<endl;
        }else{
            cout<<st.top()<<endl;
        }
    }
    return 0;
}