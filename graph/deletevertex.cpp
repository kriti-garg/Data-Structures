#include <iostream>
using namespace std;
void deleteEdge(int arr[][]){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int p,q;
    cin >> p >> q;
    arr[p][q] = 0;
    arr[q][p] = 0;
  }
  return;
}

void deleteVertex(int arr[][], int vert){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    int p;
    cin >> p;
    for(int i=1;i<=vert;i++)
    {
      arr[p][i] = 0;
      arr[i][p] = 0;
    }
  }
  return;
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
  
  deleteEdge(graph);
  deleteVertex(graph, vertices);
  return 0;
}

/*Input
there are n edges and v vertices in graph
The following n lines contain inputs i,j which indicate that there is an edge from i to j*/