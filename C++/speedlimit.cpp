//kattis speedlimit
#include <iostream>
using namespace std;

int main(){
  int n, speed, t, distance, prev;
  cin>>n;

  while(n>0){
    prev=0;
    distance=0;
    for (int i=0; i<n; i++){
      cin>>speed>>t;
      distance+= speed*(t-prev);
      prev=t;
    }
    cout<<distance<<" miles"<<endl;
    cin>>n;
  }

  return 0;
}
