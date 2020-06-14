#include <bits/stdc++.h>
using namespace std;

int main(){

  string str;
  int t=0, g=0, c=0, sum=0;
  cin>>str;
  for(auto it = str.begin(); it != str.end(); it++ ){
    char ch =*it;
    if(ch=='T')t++;
    else if(ch=='C')c++;
    else if(ch=='G')g++;
  //cout<<t<<" "<<c<<" "<<g<<endl;
  }
  sum+= min(min(t,g), c)*7;
  sum+=pow(t,2)+pow(g,2)+pow(c,2);
  cout<<sum<<endl;

  return 0;
}
