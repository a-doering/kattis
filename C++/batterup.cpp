 //kattis batterup
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int n, sum=0, num=0;
  cin>>n;
  for (int i=0; i<n; i++){
    int a;
    cin>>a;
    if (a>-1){
      num++;
      sum+=a;
    }
  }

  double sluggishPercentage;
  sluggishPercentage = (double)sum/ (double)num;
  printf("%f",sluggishPercentage);
  return 0;
}
