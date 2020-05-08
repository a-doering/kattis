//kattis conundrum
#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  int cnt=0;
  for(int i=0; i<s.length(); i+=3){
    if(s[i]!='P')cnt++;
    if(s[i+1]!='E')cnt++;
    if(s[i+2]!='R')cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
