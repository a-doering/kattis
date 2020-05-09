//kattis evenup
#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n, curr;
  cin>>n;

  stack <int> s;

  for (int i=0; i<n; i++){//O(n)
    cin>>curr;
    if (!s.empty() && (curr+s.top())%2==0)
      s.pop();
    else s.push(curr);
  }

  cout<<s.size();
  return 0;
}
