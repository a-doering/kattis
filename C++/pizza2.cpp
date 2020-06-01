//kattis pizza2
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  double r,c;
  cin>>r>>c;
  cout.precision(8);
  cout<<pow(r-c, 2)/pow(r, 2)*100;
  return 0;
}
