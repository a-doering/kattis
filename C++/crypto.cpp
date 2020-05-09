//kattis crypto
#include <iostream>
using namespace std;

int main(){
  long long n, k, l,cnt, max_cnt;
  cin>>n;

  max_cnt=0;
  k=0;
  for(int i=2; i<=n; i++){
    l=n;
    cnt=0;

    while(l>0){
      if((l%i)==0){
        cnt++;
        l/=i;
      }
      else l=0;
    }
    if(cnt>max_cnt){
        max_cnt = cnt;
        k=i;
    }
  }

  cout<<k<<endl;
}
