//kattis bookingaroom
#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, n, rooms[100], taken, i;
  scanf("%d %d", &r, &n);
  for( i=0; i<100;i++){
    rooms[i]=i+1;
  }
  if (n==r) printf("too late\n");
  else {
    for( i=0; i<n; i++){
      scanf("%d", &taken);
      rooms[taken-1]=0;
    }
    i=0;
    while(rooms[i]==0){
      i++;
    }
    printf("%d", rooms[i]);
    }

  return 0;
}
