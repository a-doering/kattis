//kattis helpaphd
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    if(s=="P=NP")cout<<"skipped"<<endl;
    else{
      char dummy;
      int a,b;
      istringstream iss(s);
      iss>>a>>dummy>>b;
      cout<<a+b<<endl;
    }
  }
}
