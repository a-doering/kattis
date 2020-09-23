//kattis treasurehunt
#include <bits/stdc++.h>
using namespace std;

char field[201][201];

void findTreasure(int steps, int row, int col, int maxR, int maxC){
  if(row<0 || row>=maxR || col<0 || col>= maxC)
    printf("Out\n");
  else if (steps>maxR*maxC)
    printf("Lost\n");
  else if(field[row][col]=='T')
    printf("%d\n", steps);
  else if(field[row][col]=='N')
    findTreasure(steps+1, row-1, col, maxR, maxC);
  else if(field[row][col]=='E')
    findTreasure(steps+1, row, col+1, maxR, maxC);
  else if(field[row][col]=='S')
    findTreasure(steps+1, row+1, col, maxR, maxC);
  else if(field[row][col]=='W')
    findTreasure(steps+1, row, col-1, maxR, maxC);
}


int main() {
  int R, C;
  scanf("%d %d", &R, &C);
  for (int i = 0; i < R; i++)
    scanf("%s", &field[i]);

  findTreasure(0,0,0,R,C);
  return 0;
}
