//kattis oddgnome
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0; i<n;i++){
    int g, id, interval;
    cin>>g;
    vector<int> v;
    for(int j=0; j<g; j++){
      cin>>id;
      v.push_back(id);
    }

    if(g==3)cout<<2<<endl;
    else{
      for(int j=0; j<g-1; j++){
        if(v[j+1]!=v[j]+1){
          cout<<j+2<<endl;
          break;
        }
      }
    }
  }
}
