//kattis icpcawards
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
  int n, cnt=0;
  cin>>n;
  unordered_set<string> won;

  for(int i=0; i<n && cnt <12; i++){
    string s1,s2;
    cin>>s1>>s2;
    if(won.count(s1)==0){
        cout<<s1<<" "<<s2<<endl;
        cnt++;
    }
    won.insert(s1);
  }
  return 0;
}
