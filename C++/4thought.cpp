//kattis 4thought
#include <iostream>
#include <vector>

int main(){
  int tc, n, res;
  bool right;
  std::cin>>tc;
  char op[4] = {'+','-','*','/'};
  std::vector <int> curr_op;

  for(int t=0; t<tc; t++){
    std::cin>>n;
    right = false;

    for(int i=0; i<4 && !right; i++){
      for(int j=0; j<4 && !right; j++){
        for(int k=0; k<4 && !right; k++){

          curr_op = {i,j,k};
          //work here the result res out
          res = n;

          if(res==n){
            std::cout<<"4 "<<op[curr_op[1]];
            std::cout<<" 4 "<<op[curr_op[1]];
            std::cout<<" 4 "<<op[curr_op[2]];
            std::cout<<" 4 = "<<n;
            right = true;
          }
        }
      }
    }
    if (!right)std::cout<<"no solution"<<std::endl;
  }

  return 0;
}
