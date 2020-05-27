//kattis onechicken
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, left;

  cin>>a>>b;
  left= b-a;

  if (left>1||left==0)printf("Dr. Chaz will have %d pieces of chicken left over!",left);
  else if (left==1)printf("Dr. Chaz will have 1 piece of chicken left over!",left);
  else if (left==-1)printf("Dr. Chaz needs 1 more piece of chicken!");
  else printf("Dr. Chaz needs %d more pieces of chicken!", -1*left);

  return 0;
}
