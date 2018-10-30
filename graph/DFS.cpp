#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int>adj[111111];
int vis[111111]={0};
// int level[11111] = {0};
vector<int> trav;

void printlist(){
for(int q=0;q<10;q++){
    cout << q << ": ";
    for(int i=0;i<adj[q].size();i++)
      cout << adj[q][i] << " ";
    cout << endl;
  }
}

void dfs(int u){
  trav.push_back(u);
  vis[u] = 1;
  for(int i=0;i<adj[u].size();i++)
  {
      int v = adj[u][i];
    if(vis[v] == 0)
        dfs(v);
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
  
  cin >> source;
  dfs(source);
  for(int i=0;i<trav.size();i++)
      cout << trav[i] << " ";
}

