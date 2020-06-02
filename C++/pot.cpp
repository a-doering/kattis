//kattis pot
#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum=0, combinedNumber, numLines, i;
  cin>>numLines;
  for(i=0; i<numLines; i++){
    cin>>combinedNumber;
    sum+= pow(combinedNumber/10,combinedNumber%10);
  }
  cout<<sum<<endl;

  return 0;
}
