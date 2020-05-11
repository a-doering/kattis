//kattis greedilyincreasing
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, num, size, max=0;
  cin>>n;
  deque <int> dq;
  for(int i=0; i<n; i++){
    cin>>num;
    if(num>max){
      max=num;
      dq.push_back(num);
    }
  }
  size=dq.size();
  cout<<size<<endl;
  for(int i=0; i<size-1; i++){
    cout<<dq.front()<<" ";
    dq.pop_front();
  }
  cout<<dq.front();
    dq.pop_front();

  return 0;
}
