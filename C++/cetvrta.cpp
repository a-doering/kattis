//kattis Cetvrta
#include <iostream>

int main(){
  int coordinates [4][2];
  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      std::cin>>coordinates[i][j];
    }
  }
  for (int i=0; i<2; i++){
    if(coordinates[0][i]==coordinates[1][i])
      coordinates[3][i]= coordinates[2][i];
    else if(coordinates[0][i]==coordinates[2][i])
      coordinates[3][i]= coordinates[1][i];
    else// if (coordinates[1][i]==coordinates[2][i])
      coordinates[3][i]= coordinates[0][i];
  }

  std::cout<<coordinates[3][0]<<" "<<coordinates[3][1]<<std::endl;
  return 0;
}
