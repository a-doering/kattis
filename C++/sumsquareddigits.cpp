//sumsquareddigits
#include <iostream>
#include <math.h>
using namespace std;

int ssd(long b, long n){
  int res = 0;
  while(n>0){
    res+=(n%b)*(n%b);
    n/=b;
  }
  return res;
}

int main(){
  int tc;
  cin>>tc;

  for(int i=0; i<tc; i++){
    long b, dummy;
    long n;
    cin>>dummy>>b>>n;
    cout<<i+1<<" "<<ssd(b,n)<<endl;
  }
}
