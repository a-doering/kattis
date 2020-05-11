//kattis heartrate
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float n,b,p;
  cin>>n;
  while(n>0){
    cin>>b>>p;
    cout<<setprecision(8)<<60*(b-1)/p<<" "
      <<60*b/p<<" "<<60*(1+b)/p<<endl;
    n--;
  }
}
