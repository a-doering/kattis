//kattis heliocentric
#include <iostream>
using namespace std;

int main(){
  int e, m, i=1, days;
  while(cin>>e>>m){
    for( days=0; (e+days)%365 != (m+days)%687 != 0; days++);

    cout<<"Case "<<i<<": "<<days<<endl;
    i++;
  }
  return 0;
}
