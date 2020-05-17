//kattis mirror
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;

  for(int i=0; i<n;i++){
    cout<<"Test "<<i+1<<endl;
    int r,c;
    cin>>r>>c;
    char ch;
    vector<char> v;

    for(int j=0; j<r*c; j++){
      cin>>ch;
      v.push_back(ch);
    }

    //Version1
    /*for(int j=r-1; j>=0; j--){
      for(int k=c-1; k>=0; k--){
        cout<<v[k+j*c];
      }
      cout<<endl;
    }*/

    //Version2
    reverse(v.begin(), v.end());
    for(int j=0; j<r*c; j++){
      cout<<v[j];
      if(j%c==c-1)cout<<endl;
    }

  }
  return 0;
}
