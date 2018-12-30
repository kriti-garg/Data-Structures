#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertices,edges;
    vector<int>p(1000);
    vector<vector<int> > adj;
    for(int i=0;i<1000;i++)
    adj.push_back(p);
    cin>>vertices>>edges;
    for(int i=1;i<=edges;i++){
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;
        //adj[y][x]=1;
    }
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    int add;
    cin>>add;
   //int big;
    for(int i=1;i<=add;i++){
        int x,y;
        cin>>x>>y; 
        adj[x][y]=1;
        //adj[y][x]=1;
    }
    for(int i=1;i<=vertices+1;i++)
    {
        for(int j=1;j<=vertices+1;j++)
        cout<<adj[i][j]<<" ";
        cout<<endl;
    }
}