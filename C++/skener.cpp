//kattis skener
#include <iostream>
#include <string>
using namespace std;

int main(){
  int r,c, zr,zc;
  cin>>r>>c>>zr>>zc;
  string s;

  for(int i=0; i<r; i++){
    cin>>s;
    for(int j=0; j<zr; j++){
      for(int k=0; k<c; k++){
        for(int l=0; l<zc; l++){
          cout<<s[k];
        }
      }
      cout<<endl;
    }
  }
}
