//kattis estimatingtheareaofacircle
#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
  double area, area_est;
  double r,m,c;
  while(std::cin>>r>>m>>c){
      if(r==0)break;
      std::cout<<std::setprecision(9)<<
      std::pow(r,2)*M_PI<<" "<<std::pow(r,2)*4*c/m<<std::endl;
  }
  return 0;
}
