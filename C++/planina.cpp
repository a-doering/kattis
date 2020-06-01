//kattis planina
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sP;//sidepoints
  cin>>n;
  sP=2;
  for(int i=0; i<n; i++) sP = sP*2-1;
  cout<<(sP)*(sP);

  return 0;
}
