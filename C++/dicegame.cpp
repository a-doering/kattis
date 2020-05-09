//kattis dicegame
#include <iostream>
using namespace std;

int main(){
  float a,b,sum1=0, sum2=0;
  cin>>a>>b;sum1+=(b+a);
  cin>>a>>b;sum1+=(b+a);
  cin>>a>>b;sum2+=(b+a);
  cin>>a>>b;sum2+=(b+a);
  if(sum1==sum2)cout<<"Tie"<<endl;
  else if (sum1>sum2)cout<<"Gunnar"<<endl;
  else cout<<"Emma"<<endl;
}
