//kattis oddities
#include <iostream>

int main() {
  int tests, num, i;
  scanf("%d", &tests);
  for (i=0; i<tests; i++){
    scanf("%d", &num);
    if(num%2==0)printf("%d is even\n", num);
    else printf("%d is odd\n", num);
  }

  return 0;
}
