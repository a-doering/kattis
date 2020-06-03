//kattis quickestimate
#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  for(int i=0; i<n; i++){
    cin>>s;
    cout<<s.length()<<endl;
  }
  return 0;
}
