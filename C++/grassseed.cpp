//kattis grassseed
#include <iostream>
using namespace std;


int main() {
  int l;
  double c, sum=0;
  cin>>c>>l;
  for(int i=0; i<l; i++){
    double a, b;
    cin>>a>>b;
    double mult= a*b;
    sum+=mult;
  }
  printf("%.7f", sum*c);
  return 0;
}
