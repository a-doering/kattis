//pet
#include <bits/stdc++.h>
using namespace std;

int main(){

  int max_val=0, best, val;

  for(int i=0; i<5;i++){
    int sum=0;
    for(int j=0; j<4; j++){
      cin>>val;
      sum+=val;
    }
    if(sum>max_val){
      max_val=sum;
      best=i+1;
    }
  }
  cout<<best<<" "<<max_val<<endl;
  return 0;
}
