//kattis faktor
#include <iostream>

int main() {
  int articles, factor, bribes;
  scanf("%d %d", &articles, &factor);
  bribes=articles*(factor-1)+1;
  printf("%d", bribes);
  return 0;
}
