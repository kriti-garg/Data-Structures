#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int>adj[111111];
int vis[111111]={0};
int level[11111] = {0};
vector<int> trav;

void printlist(){
for(int q=0;q<10;q++){
    cout << q << ": ";
    for(int i=0;i<adj[q].size();i++)
      cout << adj[q][i] << " ";
    cout << endl;
  }
}

void bfs(int source){
  queue<int> q;
  q.push(source);
  vis[source] = 1;
  level[source] = 0;
  
  while(!q.empty()){
    int u = q.front();
    trav.push_back(u);
    q.pop();
    for(int i=0; i < adj[u].size(); i++){
      int v = adj[u][i];
      if(vis[v] == 0){
        level[v] = level[u] + 1;
        q.push(v);
        vis[v] = 1;
      }
    }
  }
}

int main() {
  int vertices;
  int edges;
  cin >> vertices >> edges;

  for(int i=0;i<edges;i++){
    int x,y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  
  // printlist();
  int source = 0;
  cin >> source;
  bfs(source);
  
  for(int i=0;i<trav.size();i++)
    cout << trav[i] << " ";
}
  