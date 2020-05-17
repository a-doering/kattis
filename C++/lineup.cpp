//kattis lineup
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  string before;
  cin>>before;

  bool inc = false, dec= false;

  for(int i=1; i<n; i++){
    string names;
    cin>>names;
    if (before.compare(names) <0)
      inc = true;
    else if(before.compare(names) >0)
    dec=true;
    before=names;
    }

  if(inc && dec)cout<<"NEITHER";
  else if(inc)cout<<"INCREASING";
  else if(dec)cout<<"DECREASING";
  else cout<<"NEITHER";

  return 0;
}
