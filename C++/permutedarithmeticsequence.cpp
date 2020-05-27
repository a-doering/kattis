//kattis permutedarithmeticsequence
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n, dummy;
  std::cin>>n;

  for(int i=0; i<n; i++){
    int m,diff;
    bool arithmetic = true;
    std::cin>>m;
    std::vector<int> v;

    for(int j=0; j<m; j++){
      std::cin>>dummy;
      v.push_back(dummy);
    }

    diff = v[1]-v[0];
    for(int j=1; j<m && arithmetic; j++){
      if(v[j] != v[0]+j*diff) arithmetic = false;
    }
    if(arithmetic){
      std::cout<<"arithmetic"<<std::endl;
    }
    else{
      arithmetic = true;
      std::sort(v.begin(), v.end());
      diff = v[1]-v[0];

      for(int j=1; j<m && arithmetic; j++){
        if(v[j] != v[0]+j*diff) arithmetic = false;
      }
      if(arithmetic)std::cout<<"permuted arithmetic"<<std::endl;
      else std::cout<<"non-arithmetic"<<std::endl;
    }
  }
  return 0;
}
