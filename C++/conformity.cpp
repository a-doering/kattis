//conformity
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int n;
  cin>>n;
  //works as frequency table
  //fills map with sets of ids
  map <set<int>,int> frogs;
  for(int i=0; i<n; i++){
      //fill set with ids, sorts
      set<int> ids;
      int id;
      for(int j=0; j<5; j++){
        cin>>id;
        ids.insert(id);//set sorts
      }
      frogs[ids]++;//map sorts
  }
  int max_pop=-1, ans=0;
  //ans in number of frogs taking the most pop course

  //reads out second value, meaning how often the combination arrives
  //ans must always rise in case several ave same popularity
  for(auto &itr : frogs){
    if(itr.second>max_pop){
        max_pop=itr.second;
        ans=0;
    }
    if(itr.second==max_pop)ans+=itr.second;
  }
  //cout<<max_pop<<endl; //max popularity in tc is always 1...
  cout<<ans<<endl;
  return 0;
}
