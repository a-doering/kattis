//kattis autori
#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, len;
  char str[101], firstLetter;

  fgets (str, 101, stdin);
  len = strlen (str);
  for(i=0; i<len; i++){
    if(isupper(str[i])) printf("%c", str[i]);
  }
}
