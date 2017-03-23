#include<iostream>
#include<cstring>
using namespace std;

int main (){
  char s[201], t[101], p[101];

  scanf(%s, %s, s, p);
  strcpy(t, s);//　tにsをコピーする
  strcat(s, t);//sにtを連結する　sに連続

  if(strstr(s, p) == NULL) printf("NO\n");//sからpを探してぽいんたを返す
  else printf("YES\n");

  return 0;
}
