//kattis twostones
#include <iostream>
using namespace std;

int main() {
  long long n;
  cin>>n;
  n%=2;
  if (n==1)cout<<"Alice"<<endl;
  else cout<<"Bob"<<endl;

  return 0;
}
