//qaly
#include <iostream>
#include <iomanip>

int main(){
  float n, res = 0;
  std::cin>>n;
  float a,b;

  for(int i =0; i<n; i++){
      std::cin>>a>>b;
      res+= a*b;
  }
  std::cout<<std::setprecision(8)<<res;
}
