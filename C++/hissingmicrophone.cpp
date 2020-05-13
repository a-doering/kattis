//kattis hissingmicrophone
#include <bits/stdc++.h>
using namespace std;

int main() {
  string letters;
  cin>>letters;
  for (int i=0; i<29; i++){
    if (letters[i]=='s' && letters[i+1]=='s'){
      cout<<"hiss"<<endl;
      return 0;
    }
  }
  cout<<"no hiss";

  return 0;
}
