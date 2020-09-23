// kattis tetrationn
#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
  double n;
  std::cin>>n;
  std::cout<<std::setprecision(16)<<pow(n, 1/n)<<std::endl;
  return 0;
}
