//kattis sumoftheothers
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int sum, dummy;
  vector<int> v;

  while(getline(cin, s)){
    istringstream ss(s);
    while(ss>>dummy){
        v.push_back(dummy);
        ss.clear();
      }
    sum = 0;
    for(int i=0; i<v.size(); i++){
        sum+=v[i];

    }
    for(int i=0; i<v.size(); i++){
      if((sum-v[i]) == v[i]){

        cout<<v[i]<<endl;
        break;
      }
    }
    v.clear();
  }
  return 0;
}
