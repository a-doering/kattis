//olderbrother
#include <iostream>
#include <math.h>

#define EPSILON 1E-8

bool is_prime(int p){
  if(p < 2) return false;
  if(p < 4) return true;
  if(p%2 == 0 || p%3 == 0)return false;
  if(p<25)return true;
  for(int i=5; i*i <=p; i+=6)
    if(p%i == 0 || p% (i+2)==0)
        return false;

  return true;
}

int main(){
  //q=p^k
  int q, p;
  int k_max = 29;//highest power for 2, that yields 2^k<m
  int min_prime = 2;
  std::cin>>q;

  if(is_prime(q)){
    std::cout<<"yes";
    return 0;
  }

  int  p_i_round;
  double p_i;

  for(int k_i=k_max;k_i>1;k_i-- ){
    p_i_round = (int)round(p_i = std::pow(q, 1.0/k_i));
    if(p_i<min_prime){
      continue;
    }
    if(std::abs(p_i - p_i_round)< EPSILON){
      if(is_prime(p_i_round)){
        std::cout<<"yes\n";
        return 0;
      }
    }
  }

  std::cout<<"no\n";
  return 0;
}
