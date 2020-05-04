//kattis different
#include <cstdio>

int main() {
  long long a,b, diff;

  while (scanf("%lld %lld", &a, &b)==2){
    diff = a-b;
    if (diff<0) diff*=-1;
    printf("%lld\n", diff);
  }
  return 0;
}
