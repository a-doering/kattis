//kattis bestcompression
#include <iostream>
#include <cmath>

int main(){
  unsigned long long n;
  int b;
  std::cin>>n>>b;
  n<=std::pow(2,b+1)-1 ? std::cout<<"yes"<<std::endl
                        : std::cout<<"no"<<std::endl;
  return 0;
}
