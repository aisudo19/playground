#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string toUpper(string s){
  string t = s;
  for (int i = 0; i < s.size(); i++){
    t[i] = toupper(s[i]);
  }
  return t;
}

int mian(){
  string target, source;

  cin >> target;
  target = toUpper(target);

  int cnt = 0;

  while(1){
    cin >> source;
    if(source == "END_OF_TEXT")break;
    source = toUpper(source);
    if(target == source)cnt++;
  }

  cout << cnt << endl;

  return 0;
}
//cinは文字列を空白・タブ・改行区切りで入力する！！　ので一個ずつ比較しているｓ
