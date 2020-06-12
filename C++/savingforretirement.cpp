//kattis savingforretirement
#include <iostream>
using namespace std;

int main(){
  int b,br,bs,a,as;
  int sum_b=0, n=0;
  cin>>b>>br>>bs>>a>>as;
  sum_b = (br-b)*bs;
  n = sum_b/as;
  if(((float) sum_b/as - sum_b/as)>=0)n++;
  n+=a;

  cout<<n<<endl;
}
