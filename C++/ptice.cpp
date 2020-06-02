//kattis ptice
#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  string s[4];
  s[1] = "ABC";
  s[2] = "BABC";
  s[3] = "CCAABB";
  string names [4] = {"", "Adrian", "Bruno", "Goran"};
  int num [4] = {0};
  cin>>n>>s[0];

  for(int i=0; i<n; i++){
    if(s[0][i]==s[1][i%s[1].length()])num[1]++;
    if(s[0][i]==s[2][i%s[2].length()])num[2]++;
    if(s[0][i]==s[3][i%s[3].length()])num[3]++;
  }
  for(int i=1; i<4; i++){
    if(num[i]>num[0])num[0]=num[i];
  }
  cout<<num[0]<<endl;
  for(int i=1; i<4; i++){
    if(num[i]==num[0])cout<<names[i]<<endl;
  }

  return 0;
}
