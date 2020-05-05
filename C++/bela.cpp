//kattis bela
#include <iostream>
using namespace std;

int main(){
  int n, cnt=0;
  char b, dummy;
  cin>>n>>b;
  cin.get(dummy);
  for(int i=0; i<4*n; i++){
    char card, suit;
    cin.get(card);
    cin.get(suit);
    cin.get(dummy);
    switch(card){
      case 'A': cnt += 11; break;
      case 'K': cnt += 4; break;
      case 'Q': cnt += 3; break;
      case 'J': cnt += suit == b ? 20:2;break;
      case 'T': cnt += 10; break;
      case '9': cnt += suit == b ? 14:0;break;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
