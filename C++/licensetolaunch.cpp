//licensetolaunch
#include <iostream>

int main(){
  long long n,i_min = 0, val_min = 1000000000, dummy;
  std::cin>>n;
  for(int i=0; i<n;i++){
      std::cin>>dummy;
      if(dummy<val_min){
        val_min = dummy;
        i_min = i;
      }
  }
  std::cout<<i_min<<std::endl;
  return 0;
}
