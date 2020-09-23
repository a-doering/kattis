//kattis trollhunt
#include <iostream>
using namespace std;

int main() {
  int b, k, g, d;//bridges, knights, groupmembers (min), days
  cin>>b>>k>>g;
  b--;//bridges to be searched after he left initial bridge
  d= b/(k/g);
  if(b%(k/g)>0)d++;

  cout<<d;
}
