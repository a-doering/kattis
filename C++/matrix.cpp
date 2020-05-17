//matrix
//2x2 inverse
#include<iostream>
using namespace std;

int main(){
  int cases = 0;
  int mat[4];
  int det;

  while(cin>>mat[0]>>mat[1]>>mat[2]>>mat[3]){
    cases++;
    //cramers rule
    det = mat[0]*mat[3]-mat[2]*mat[1];
    cout<<"Case "<<cases<<":\n";
    cout<<mat[3]/det<<" "<<-mat[1]/det<<endl;
    cout<<-mat[2]/det<<" "<<mat[0]/det<<endl;

  }
  return 0;
}
