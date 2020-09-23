//kattis toilet
#include <iostream>

int main(){

  std::string s;
  std::cin>>s;
  int cnt1, cnt2, cnt3;
  cnt1=cnt2=cnt3=0;
  //all after first position
  for (int i=1; i<(s.size()); i++){
    if(s[i]=='D')cnt1+=2;
    if(s[i]=='U')cnt2+=2;
    if(s[i]!=s[i-1])cnt3++;
  }
  if(s[0]=='D' && s[1]=='D')cnt1--;
  if(s[0]=='D' && s[1]=='U')cnt1++;
  if(s[0]=='U' && s[1]=='U')cnt2--;
  if(s[0]=='U' && s[1]=='D')cnt2++;

  std::cout<<cnt1<<std::endl<<cnt2<<std::endl<<cnt3<<std::endl;

  return 0;
}
