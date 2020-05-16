//kattis leftbeehind
#include <iostream>
using namespace std;

int main() {
  int f=1, s=2; //first,second
  int count =0;
  while(count<15) {
    count++;
    cin>>f>>s;
    if (s==0 && f==0) break;
    if ((f+s) ==13) cout<<"Never speak again."<<endl;
    else if(f==s) cout<<"Undecided."<<endl;
    else if(f>s) cout<<"To the convention."<<endl;
    else if (s>f)cout<<"Left beehind."<<endl;
  }

  return 0;
}
