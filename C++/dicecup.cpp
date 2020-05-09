//dice cup
#include <bits/stdc++.h>
using namespace std;

int main(){

  double a,b, val;
  cin>>a>>b;

  double prob[int(a+b+1)]={0};

  for(int i=1; i<=a;i++){
    for(int j=1; j<=b; j++){
      val=i+j;
      prob[int(val)]+=(1/a/b);
    }
  }
  double max_prob= 0;

  for(int i=0; i<=int(a+b); i++)
    if(prob[i]>max_prob)max_prob= prob[i];

  for(int i=0; i<=int(a+b); i++)
    if(prob[i]==max_prob)cout<<i<<endl;

  return 0;
}
