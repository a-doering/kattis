//kattis mixedfractions
#include <iostream>
using namespace std;

int main(){
  unsigned long long n, d;
  while(cin>>n>>d, n+d !=0){
    cout<<n/d<<" "<<n%d<<" / "<<d<<endl;
  }
  return 0;
}
