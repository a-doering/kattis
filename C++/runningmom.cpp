//runningmom
#include <bits/stdc++.h>
using namespace std;

unordered_map <string, vector<string>> AL;//like separate chaining technique
unordered_map <string, int> status;
bool back_edge_found;

void dfs(string city){
  status[city]=1;//explored
  for(auto &neighbor : AL[city]){
    if(status[neighbor]==0)//unvisted neighbor
      dfs(neighbor);
    else if(status[neighbor]==1)
      back_edge_found = true;
  }
  status[city]=2;//fully visited
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n;
  string a,b;

  cin>>n; cin.get();
  while(n--){
    cin>>a>>b;
    AL[a].push_back(b);//directed edge
  }

  while(cin>>a, !cin.eof()){
    back_edge_found = false;
    for(auto &city : AL)//every city from input
      status[city.first]=0;//unvisited == 0
    dfs(a);
    cout<<a;
    //if mom can reach cycle from beginning, safe
    cout<<(back_edge_found ? " safe" : " trapped")<<endl;
  }

  return 0;
}
