#include <iostream>

int main() {
  int days, i, negative=0, temp;
  scanf("%d", &days);
  for(i=0; i<days; i++){
    scanf("%d", &temp);
    if(temp<0)negative++;
  }
  printf("%d", negative);
  return 0;
}