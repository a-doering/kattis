//katttis spavanac
#include <iostream>
using namespace std;

int main() {
  int h, min;
  cin>>h>>min;

  min-=45;
  if (min<0){
    min+=60;
    if (h==0)h=23;
    else h-=1;
  }
  cout<<h<<" "<<min;

return 0;
}
