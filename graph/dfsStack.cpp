#include <iostream>
#include<vector>
#include<stack>
using namespace std;
vector < int > adj[1111111];
vector < int > trav;
int vis[1111111] = {0};

void dfs(int source){
  int v;
  stack<int> s;
  s.push(source);
  vis[source] = 1;
  while(!s.empty()){
    int x = s.top();
    trav.push_back(x);
    s.pop();    
    for(int i=0;i<adj[x].size();i++){
      v = adj[x][i];
      if(vis[v]==0){
        s.push(v);
        vis[v]=1;
      }
    }
  }
}

void bfs(int source){
 queue <int> q;
  q.push_back(source);
  vis[source] = 1;
  while(!q.empty()){
    int u = q.pop_front();
    trav.push_back(u);
    for(int i=0;i<adj[u].size();i++){
     int v = adj[u][i];
      if(vis[v] == 0){
       vis[v] = 1;
        q.push_back(v);
      }
    }
    
  }
  
}


// To execute C++, please define "int main()"
int main() {
  int vertices,edges;
  cin>>vertices>>edges;
  int source;
  cin>>source;
  for(int i=0;i<edges;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(source);
  
  for(int i=0;i<vertices;i++){
    cout<<i<<" : ";
    for(int j=0;j<adj[i].size();j++)
      cout<<adj[i][j]<<" ";
      cout<<endl;
  }
  for(int i=0;i<trav.size();i++)
  {
    cout<<trav[i] << " "; 
  }
}

// 5
// 4
// 0
// 0 1
// 0 2
// 1 3
// 1 4
  
