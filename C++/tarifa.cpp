//kattis tarifa
#include <iostream>
using namespace std;

int main() {
  int x, n, a, sum;
  cin>>x>>n;
  sum=x;
  for (int i=0; i<n; i++){

    cin>>a;
    if (sum-a<0)sum=0;
    else sum-=a;
    sum+=x;
  }
  cout<<sum;
  return 0;
}
