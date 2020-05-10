//freefood
#include <iostream>
#include <set>
using namespace std;

int main(){
  int n;
  cin>>n;
  set<int> free;
  for(int i=0; i<n;i++){
    int a,b;
    cin>>a>>b;
    for(int j = a; j<=b; j++){
      free.insert(j);
    }
  }

  int res = free.size();
  cout<<res;
}

