//kattis ladder
#include <iostream>
#include <math.h>

#define PI 3.14159265
using namespace std;

int main() {

  int h, alpha;
  float l;
  cin>>h>>alpha;

  l= h/ sin(alpha*PI/180);
  if(l-(int)l > 0)l++;

  cout<<(int) l;
  return 0;
}
