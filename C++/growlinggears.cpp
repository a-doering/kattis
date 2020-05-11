//growling gears kattis
#include <iostream>
#include <vector>
using namespace std;
// T=−aR^2+bR+c
//-->max at R=b/2/a

int main(){
  float n, gears, a, b, c, num_max;
  float T, T_max;
  cin>>n;

  for(int i=0; i<n; i++){
    vector <float> v_T;
    cin>>gears;

    for(int j=0; j<gears; j++){
      cin>>a>>b>>c;
      T =(float)b*b/4/a+c;
      v_T.push_back(T);
    }

    num_max=0;
    for(int j=0; j<gears;j++){
      if (v_T[j] > v_T[num_max])num_max = j;

    }
    cout<<num_max+1<<endl;
  }
}
