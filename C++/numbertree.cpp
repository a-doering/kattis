//numbertree
#include <bits/stdc++.h>
using namespace std;

int l(int i) { return i<<1; } // 2*i
int r(int i) { return (i<<1)+1; } // (2*i)+1

int main() {
  int H, idx = 1;
  string path;
  cin >> H >> path;

  int max = pow(2, H+1)-1;
  int tree[max];

  for (auto &cmd : path) idx = (cmd == 'L') ? l(idx) : r(idx);
  cout<<max+1-idx;
  return 0;
}
