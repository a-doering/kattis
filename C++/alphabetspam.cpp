// kattis alphabetspam
#include <iostream>
#include <iomanip>

int main(){
  int a,b,c,d = 0;
  a=b=c=d=0;
  std::string s;
  std::cin>>s;

  for (int i=0; i<s.size(); i++){
    if(s[i] == '_')a++;
    else if(s[i]>='a' && s[i]<='z')b++;
    else if(s[i]>='A' && s[i]<='Z')c++;
    else d++;
  }
  int tot = a+b+c+d;
  std::cout<<std::setprecision(16)<<(double)a/tot<<std::endl;
  std::cout<<std::setprecision(16)<<(double)b/tot<<std::endl;
  std::cout<<std::setprecision(16)<<(double)c/tot<<std::endl;
  std::cout<<std::setprecision(16)<<(double)d/tot<<std::endl;

  return 0;
}
