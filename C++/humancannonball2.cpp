//kattis humancannonball2
#include <bits/stdc++.h>
using namespace std;
#define g 9.81

int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    float v0,theta,x1,h1,h2,t,y1;
    cin>>v0>>theta>>x1>>h1>>h2;

    t=x1/v0/cos(theta/180*M_PI);
    y1=v0*t*sin(theta/180*M_PI)-g*t*t/2;

    if((y1+1<h2) && (y1-1>h1))cout<<"Safe"<<endl;
    else cout<<"Not Safe"<<endl;
  }
}
