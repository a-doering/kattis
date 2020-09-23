//kattis trik
#include <bits/stdc++.h>
using namespace std;

int main() {

  char input[50];
  scanf("%s", &input);
  int cup [3]={1,0,0};//ball under leftmost
  int temp;
  int n=strlen(input);

    for(int i=0; i<n; i++){
      if (input[i] == 'A'){
        temp= cup[0];
        cup[0]= cup[1];
        cup[1]=temp;
      }
      else if (input[i] == 'B'){
        temp= cup[2];
        cup[2]= cup[1];
        cup[1]=temp;
      }
      else if (input[i] == 'C'){
        temp= cup[0];
        cup[0]= cup[2];
        cup[2]=temp;

      }
      else break;
    }

  if(cup[0]==1)cout<<1;
  else if(cup[1]==1)cout<<2;
  else cout<<3;


  return 0;
}
