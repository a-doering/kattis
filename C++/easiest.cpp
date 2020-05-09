//kattis easiest
#include <iostream>
using namespace std;

int main() {

  while(1){
    long num, sumOfDigits = 0, testedSum;
    cin>>num;
    if(num==0) return 0;
    long temp= num;
    while(temp>0){
      sumOfDigits+=temp%10;
      temp /=10;
    }
    int i=10;
    do{
      i++;
      temp=num*i;
      testedSum=0;

      while(temp>0){
      testedSum+=temp%10;
      temp /=10;
      }
    }while(testedSum != sumOfDigits);
    cout<<i<<endl;
  }

  return 0;
}
