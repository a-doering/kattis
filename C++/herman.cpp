//kattis herman
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  double r;
  cin>>r;
  //rejected the setprecision(8) of iomanip on tc5
  cout.precision(8);
  cout<<fixed<<pow(r,2)*M_PI<<endl;
  cout<<fixed<<pow(r,2)*2<<endl;
  return 0;
}
