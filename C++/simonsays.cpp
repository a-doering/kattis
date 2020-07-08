//kattis simonsays
#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  string a, simonSays;
  simonSays = "Simon says";

  cin>>n;
  cin.get();

  for(int i=0; i<n; i++){
    getline(cin, a);
    if(a.substr(0,10).compare(simonSays)==0)
      cout<<a.substr(10, a.length())<<endl;
  }
  return 0;
}
