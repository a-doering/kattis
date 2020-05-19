//kattis modulo
#include <iostream>
using namespace std;

int main() {
  int arr[42], count=0;
  for (int i=0; i<42; i++)arr[i]=-1;
  for (int i=0; i<10; i++){
    int a;
    cin>>a;
    arr[a%42]=1;

  }
  for (int i=0;i<42; i++) if (arr[i]==1) count ++;
  cout<<count;

  return 0;
}
