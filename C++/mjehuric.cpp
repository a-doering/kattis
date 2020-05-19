//kattis mjehuric
#include <bits/stdc++.h>
using namespace std;

int main() {

  int input[5];
  int temp, k=0;

  while(k<5){
  cin>>input[k];
  k++;
  }
  for(int l=0; l<5; l++){
    for(int i=0; i<4; i++){

      if(input[i]>input[i+1]){
        temp=input[i];
        input[i]=input[i+1];
        input[i+1]=temp;

        for(int j=0; j<5;j++){
          cout<<input[j]<<" ";
        }
        cout<<endl;
      }
    }
  }

  return 0;
}
