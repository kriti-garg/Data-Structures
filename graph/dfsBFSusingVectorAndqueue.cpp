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
int top = -1;
int pq[111];
void bfs(int v,int vert,vector<int> adj[]){
  int level[111] = {0};
 top++;
  pq[top] = v;
  //queue <int> q;
  //q.push(v);
  //cout<<v<<" ";
  visit[v] = 1;
  level[v] = 0;
  while(top!=-1){
   int u = pq[top];
    cout<<u<<" ";
    top--;//q.pop();
    for(int i=0;i<adj[u].size();i++){
      int node =  adj[u][i];
    if(visit[node]==0){
      visit[node] = 1;
      level[node] = level[u] + 1;
      top++;
      pq[top] = node;
      //cout<<node<<" ";
      //q.push(node);
      }
    }
  }
}


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
  //bfs(s, vertices,adj);
}
      