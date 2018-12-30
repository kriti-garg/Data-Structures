//stub
#include <iostream>
using namespace std;
int v,vert,edge,cost[10][10],i,j,visited[10],visit[10],stack[10],top;
class DFS
{
    public:
    void Adjacency_matrix(int cost[10][10]);
    void Traversal(int cost[10][10],int v,int vert);
};
void DFS :: Adjacency_matrix(int cost[10][10]){
    cout<<"Adjacency Matrix :"<<endl;
    for(int i=1;i<=vert;i++){
     for(int j=1;j<=vert;j++){
         cout<<cost[i][j]<<"    ";
     }   
     cout<<endl;
    } 
    cout<<"Visited Vertex : ";
}
void DFS :: Traversal(int cost[10][10],int v,int vert){
    visit[v] = 1;
  cout << v <<" ";
  for(int i=1;i<=vert;i++){
    int node = cost[v][i];
    if(visit[i] == 0 && node)
    {
      Traversal(cost,i,vert);
    }
  }
  return;
}

//Stub
int main() 
{
    DFS d;
    cin>>vert;
    cin>>edge;
    for(int a=1;a<=edge;a++)
    {
        cin>>i>>j;
        cost[i][j]=1;
    }
    cin>>v;
    d.Adjacency_matrix(cost);
    d.Traversal(cost,v,vert);
    return 0;
}
//stub