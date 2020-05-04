//akcija
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, curr;
  cin>>n;
  vector <int> a;

  for(int j=0; j<n; j++){//O(n)

    cin>>curr;
    a.push_back(curr);

  }
  sort(a.begin(), a.end());//O(nlogn)

  long count=0;
  curr=1;
  for(auto it = a.end()-1; it != a.begin()-1; --it){
        if(!(curr%3==0))count+= *it;
        curr++;
    }
  cout<<count;
  return 0;
}
