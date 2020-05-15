//kornislav
#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> rect;
  int sum=0, val;
  for(int i=0; i<4; i++){
    cin>>val;
    rect.push_back(val);
    //cout<<val<<" "<<rect[i];
  }
  sort(rect.begin(), rect.end());
  cout<<rect[0]*rect[2]<<endl;

  return 0;
}
