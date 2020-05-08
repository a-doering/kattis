//kattis zamka
#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int currentNumber){
  int digit_sum=0;

  while(currentNumber){
    digit_sum += currentNumber%10;
    currentNumber /=10;
  }

  return digit_sum;
}

int main(){

  int L,D,X;
  cin>>L>>D>>X;

  //find the  min N, that L<=N<=D and sum_of_digit(N)==X
  int N;
  for (N = L;N<=D; N++){
    if(sum_of_digits(N)==X){
      cout << N <<endl;
      break;
    }
  }
  //find the max M, that L<=M<=D and sum_of_digit(M)==X
  int M;
  for (M = D;M<=D; M--){
    if(sum_of_digits(M)==X){
      cout << M <<endl;
      break;
    }
  }

  return 0;
}
