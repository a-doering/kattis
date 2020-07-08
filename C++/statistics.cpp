//kattis statistics
#include <bits/stdc++.h>
using namespace std;

void data(int n, int count){
  int i, number;
  int max=-1000001, min=1000001;

  for (i=0; i<n; i++){

    scanf("%d", &number);
    if (max<number)max=number;
    if (min>number)min=number;
  }
  printf("Case %d: %d %d %d\n", count, min, max, max-min);

}

int main() {

  int n, count =1;
  while (scanf("%d", &n)==1) data(n, count++);

  return 0;
}
