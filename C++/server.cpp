//kattis server
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, t=0, num, processable=0;
  cin>>n>>t;

  for(int i=0; i<n&&t>0; i++){
    cin>>num;
    t-=num;
    if(t>=0)processable++;
    else break;
  }

  cout<<processable<<endl;
  return 0;
}
