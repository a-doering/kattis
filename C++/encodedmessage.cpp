//kattis encodedmessage
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin>>n;
  cout<<(int)'A';
  //decoder
  for(int i=0; i<n; i++){
    cin>>s;
    int len = sqrt(s.length());
    for(int j=len-1; j>=0; j--){
      for(int k=0; k<len; k++){
        cout<<s[j+k*len];
      }
    }
    cout<<endl;
  }

  //encoder
  /*for(int i=0; i<n; i++){
    cin>>s;
    int len = sqrt(s.length());
    for(int j=0; j<len; j++){
      for(int k=len-1; k>=0; k--){
        cout<<s[j+k*len];
      }
    }
    cout<<endl;
  }*/
  return 0;
}
