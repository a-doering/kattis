#include <iostream>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int days=1, maxStat=1;
  while(maxStat<n) {
    maxStat*=2;
    days++;
  }

  printf("%d", days);

  return 0;
}
