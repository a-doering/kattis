//kattis sumkindofproblem
#include <iostream>
using namespace std;

int main(){
  int n, k, p,a,b,c;
  cin>>n;
  for(int i=0; i<n;i++){
    cin>>k>>p;
    a = (1+p)*p/2;
    b = a*2-p;
    c = 2*a;
    cout<<k<<" "<<a<<" "<<b<<" "<<c<<endl;
  }
  return 0;
}
