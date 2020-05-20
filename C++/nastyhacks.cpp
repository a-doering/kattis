//kattis nastyhacks
#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for (int i=0; i<n; i++){
    long a, b, c;
    cin>>a>>b>>c;

    if (a>b-c)cout<<"do not advertise"<<endl;
    else if (a== b-c)cout<<"does not matter"<<endl;
    else cout<<"advertise"<<endl;
  }

  return 0;
}
