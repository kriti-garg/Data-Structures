//bfs using queue and arrays and dfs using arrays
#include <iostream>
#include <queue>
using namespace std;
int visit[111] = {0};

int pq[111];
int top = -1;

void dfs(int v,int arr[100][100],int vertices){
  visit[v] = 1;
  cout<<v<<" ";
  for(int i=1;i<=vertices;i++){
   int node = arr[v][i];
    if(node && visit[i] == 0){
      dfs(i,arr,vertices);
    }  
  }
}
void bfs1(int v,int arr[100][100],int vert){
  int visited[111] = {0}; //its size is equal to num of vertices
  int level[111] = {0};
  // queue<int> q;
  // q.push(v);
  top++;
  pq[top] = v;
  
  visited[v] = 1;
  level[v] = 0;
  
  while(top != -1){
    int u = pq[top];
    cout<< u <<" ";
    top--;
    for(int i=1;i<=vert;i++)
    {
        int v = arr[u][i];
      if(v==1 && visited[i] == 0){
        top++;
        pq[top] = i;
        // q.push(i);//important
        visited[i] = 1;
        level[i] = level[u] + 1;
      }
    }
  }
}
void bfs(int v,int arr[100][100],int vert){
  int visited[111] = {0}; //its size is equal to num of vertices
  int level[111] = {0};
  queue<int> q;
  q.push(v);
  visited[v] = 1;
  level[v] = 0; 
  
//   i/j: 1 2 3 4
//   1 :  0 1 0 1
//   2 :  1 0 1 0
//   3 :  0 1 0 1
//   4 :  1 0 1 0
  
//   A1 → 2 → 4
// A2 → 1 → 3
// A3 → 2 → 4
// A4 → 1 → 3
  
  //https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/tutorial/
  
  while(!q.empty()){
    int u = q.front();
    cout<< u <<" ";
    q.pop();
    for(int i=1;i<=vert;i++)
    {
        int v = arr[u][i];
      if(v==1 && visited[i] == 0){
        q.push(i);//important
        visited[i] = 1;
        level[i] = level[u] + 1;
      }
    }
  }
}

int main() {
  int vertices,edges;
  cin >> vertices >> edges;
  
  int graph[100][100];
  
  for(int i=0;i<edges;i++){
    int x,y;
    cin>>x>>y;
    graph[x][y] = 1; // there is edge between x to y
    graph[y][x] = 1; // there is edge from y to x
  }
  int source = 0;
  cin>>source;
  bfs(source,graph,vertices);
  
  return 0;
}

/*Input
there are n edges and v vertices in graph
The following n lines contain inputs i,j which indicate that there is an edge from i to j*/