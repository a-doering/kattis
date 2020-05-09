//kattis detaileddifferences
#include <iostream>
using namespace std;

int main(){
  int n;
  string a, b;

  cin>>n;
  for(int i=0; i<n; i++){
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    for(int j=0; j<a.length(); j++){
      if (a[j]==b[j])cout<<".";
      else cout<<"*";
    }
    cout<<endl<<endl;
  }
  return 0;
}
