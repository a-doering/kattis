//provincesandgold
#include <iostream>

int main(){
  int g,s,c,tot;
  std::cin>>g>>s>>c;
  tot = g*3+s*2+c;
  if(tot>=8){
      std::cout<<"Province or ";
  }else if(tot>=5){
    std::cout<<"Duchy or ";
  }else if(tot>=2){
    std::cout<<"Estate or ";
  }
  if(tot>=6){
    std::cout<<"Gold\n";
  }else if(tot>=3){
    std::cout<<"Silver\n";
  }else{
    std::cout<<"Copper\n";
  }
  return 0;
}
