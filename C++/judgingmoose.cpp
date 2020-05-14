//kattis judgingmoose
#include <iostream>
using namespace std;

int main() {
  int l,r;
  cin >>l>>r;
  l*=2;
  r*=2;

  if (l==r && l==0) cout << "Not a moose\n";
  else if (l==r) cout << "Even "<<l <<endl;
  else if(l>r) cout <<"Odd "<< l<<endl;
  else cout <<"Odd "<< r << endl;

  return 0;
}
