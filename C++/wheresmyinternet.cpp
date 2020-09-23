//wheresmyinternet
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
  int n, m;//n vertics, m edges
  cin>>n>>m;
  //stores graph
  AL.assign(n, vector <int>());//n rows, indexed from 0 to n-1
  for(int i=0; i<m; i++){
    int a,b;//numbers of houses
    cin>>a>>b;
    a--;b--;//converts to 0 based index
    AL[a].push_back(b);//O(1)
    AL[b].push_back(a);//bi-directional
  }

  visited.assign(n, 0);//o(n)
  dfs(0); //o(n+m)

  bool disconnected = false;
  //house 1 is already connected to the internet

  //loop through all houses, the ones not visited, starting from 1 will be unconnected
  for(long i=0; i<n; i++){
      if(!visited[i]){
        cout<<i+1<<endl;
        disconnected = true;
      }
  }

  if(!disconnected)
    cout<<"Connected"<<endl;
  return 0;
}
