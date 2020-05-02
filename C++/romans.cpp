//romans
#include <iostream>

int main(){
  double miles;
  std::cin>>miles;
  miles*=1000*5280.0/4854;
  if(miles -int(miles) >=0.5){
    std::cout<<int(miles)+1;
  }else{
    std::cout<<int(miles);
  }
  return 0;
}
