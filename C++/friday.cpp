//kattis friday

#include <iostream>
#include <vector>

int main(){
  int T,D,M, d_i;
  int d_total, fridays;
  std::vector <int> d;

  std::cin>>T;
  for(int i=0; i<T; i++){

    std::cin>>D>>M;
    for(int j=0; j<M;j++){
          std::cin>>d_i;
          d.push_back(d_i);
    }

    d_total = 0;
    fridays = 0;

    for(int i=0; i<M; i++){
      if(d[i]>=13){
          if ((d_total+13)%7 == 6) fridays++;
      }
      d_total = d_total+d[i];
    }
    std::cout<<fridays<<std::endl;
    d.clear();
  }

  return 0;
}
