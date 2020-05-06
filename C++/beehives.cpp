#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double d;
  int n;
  cin>>d>>n;
  
  while(d!=0 && n!=0){
    
    double pos[n][3];//x, y, sweet
    int sweet=n, sour=0;
    
    //x, y, sweet values of all hives
    for(int i=0; i<n; i++){
     cin>>pos[i][0]>>pos[i][1];
     pos[i][2]=1;
    }
    
    for(int j=0; j<n-1; j++){
      for(int k=j+1; k<n; k++){
        //if distance is smaller, both will turn sour and values for sweet/sour be changed
        if(sqrt(pow(abs(pos[j][0]-pos[k][0]),2)+pow(abs(pos[j][1]-pos[k][1]),2))<=d){//arithmetic distance
          
          if(pos[j][2]){
            sour++;
            sweet--;
            pos[j][2]=0;
          }
          if(pos[k][2]){
            sour++;
            sweet--;
            pos[k][2]=0;
          }
        }
      }
    }
    
    cout<<sour<<" sour, "<<sweet<<" sweet"<<endl;
    cin>>d>>n;
  }
  return 0;
  
}