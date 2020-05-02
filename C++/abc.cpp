//kattis ABC
#include <bits/stdc++.h>
using namespace std;

int main() {
  int num [3], res[3], temp;
  char string[3];

  for(int i=0; i<3; i++)cin>>num[i];
  cin>>string;

  sort(begin(num), end(num));
  for(int i=0; i<3; i++){
    if(string[i]=='A') res[i]=num[0];
    else if(string[i]=='B') res[i]=num[1];
    else if(string[i]=='C') res[i]=num[2];
  }
  cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;

  return 0;
}
