//kattis mortgage
#include <iostream>
#include <math.h>
using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  long double x,y,n,r;

  while(cin>>x>>y>>n>>r && (x+y+n+r != 0)){

    if(abs(r/1200)<=1e-9){
      if(x-n*12*y<=1e-9)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else if(x*pow((r/1200)+1, n*12)-y*(pow((r/1200)+1, n*12)-1)/(r/1200)<=1e-9)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }

  return 0;
}
