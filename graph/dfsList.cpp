#include <iostream>
#include <queue>
using namespace std;
int visit[111] = {0};

/*
A1 → 2 → 4
A2 → 1 → 3
A3 → 2 → 4
A4 → 1 → 3
  */
void dfs(int v,int vert,vector<int> adj[]){
  visit[v] =1;
  cout<<v<<" ";
  for(int i=1;i<=vert;i++){
   for(int j=0;j<adj[i].size();j++){
    int node = adj[i][j];
     if(!visit[node])
      dfs(node,vert,adj);
   }
  }
}





int main(){
  vector<int> adj[111];
  int vertices,edges;
  cin >> vertices >> edges;
  for(int i=0;i<edges;i++){
     int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i=1;i<=vertices;i++){
    cout<<i<<"  : ";
   for(uint j=0;j<adj[i].size();j++){
    cout<<adj[i][j]<<" ";
   }
    cout<<endl;
  }
  
  int s;
  cin >> s;
  dfs(s, vertices,adj);
}
      