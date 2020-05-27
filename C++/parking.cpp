//kattis parking
#include <iostream>
using namespace std;

int main(){
  int tc, n, val;
  cin>>tc;
  for(int i=0; i<tc; i++){
    cin>>n;
    int min_val = 100;
    int max_val = -1;
    for(int j=0; j<n; j++){
      cin>>val;
      if(val<min_val)min_val=val;
      if(val>max_val)max_val=val;
    }
    cout<<2*(max_val-min_val)<<endl;
  }
  return 0;
}
