//kattis areal
#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
  unsigned long long area;
  std::cin>>area;
  std::cout<<std::setprecision(9)<<4*std::sqrt(area);
  return 0;
}
