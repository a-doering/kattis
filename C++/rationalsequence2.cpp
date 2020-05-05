//rationalsequence2
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int tc;
  cin>>tc;

  while(tc--){
    int k, p,q;
    char dummy;//to consume /
    cin>>k>>p>>dummy>>q;
    stack<char>path;

    //left child is  (p+q)/q
    //from given p/q we can backtrack oath

    while(p>1||q>1){
      if(p>q){//right subtree
        path.push('R');//move up, declare we came from right subtree
        //q remains and p is subtracted by q,
        //this is the p/q value of the parent vertex
        p-=q;
      }
      else{
        path.push('L');
        q-=p;
     }
    }
    int n=1;
    while (!path.empty()) {
      n = 2*n +(path.top()=='R');
      path.pop();
    }
    cout << k << " " << n << "\n";
  }
  return 0;
}
