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

//find rfind substr(i,len)

int main(){
    string str="akina";
    str="kanbe";
    str += ".kuroda"

    str.size();

    if(str=="bar"){}
    // if (strcmp(str, "bar") == 0) {}

    if(str<"piyo"){}
    //if(strcmp(str,"piyo")<0){}

    str="fghij";
    cout<<str<<endl;
    cout<<str[3]<<endl;//i

    str.find("hi");//2
    str.find("f");//0
    str.find("a");//-1

    str.substr(2);//hij
    str.substr(2,1);//h

    return 0;

}