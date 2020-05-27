//kattis pauleigon
#include <iostream>
using namespace std;

int main(){
  int n, p, o;
  cin>>n>>p>>o;
  if(((p+o)%(2*n))<n )cout<<"paul"<<endl;
  else cout<<"opponent"<<endl;
  return 0;
}
