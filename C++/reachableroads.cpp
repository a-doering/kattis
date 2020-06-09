//reachableroads
#include <bits/stdc++.h>
using namespace std;

//global variable to access easier
vector <vector<int>> AL;//adjecency list
vector <int> visited;//al

void dfs(int u){
  visited[u]=1;
  for(auto &v : AL[u])
    if(!visited[v])
      dfs(v);
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int tc;
  cin>>tc;
  while(tc--){

    int n, m;//n vertics, m edges
    cin>>n>>m;

    //stores graph
    AL.assign(n, vector <int>());//n rows, indexed from 0 to n-1
    for(int i=0; i<m; i++){
      int a,b;//numbers of houses
      cin>>a>>b;
      //a--;b--;//converts to 0 based index
      AL[a].push_back(b);//O(1)
      AL[b].push_back(a);//bi-directional
    }

    visited.assign(n, 0);//o(n)
     //o(n+m)

    bool disconnected = false;

    int unconnected =0; //num unconnected parts...
    for(long i=0; i<n; i++){
      if(!visited[i])dfs(i);
      else continue;
      disconnected = false;

      for(int j=i; j<n && !disconnected; j++){
        if(!visited[j]){
          //cout<<i+1<<endl;
          unconnected++;
          disconnected = true;
        }
      }
    }
    cout<<unconnected<<endl;
  }
  return 0;
}
