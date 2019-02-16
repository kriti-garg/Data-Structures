// #include<iostream>
// #include<set>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int> > adj[1000];
int dist[1000];
int vis[1000];

void dijkstra(int source){
  dist[source] = 0;
  multiset <pair<int,int> > s;
  s.insert({0,source});
  while(!s.empty()){
    pair<int,int> p = *s.begin();
    s.erase(s.begin());
    int dis = p.first;
    int vert= p.second; 
   
    cout << dis << " ";
    cout << vert << "\n";
    
    if(vis[vert] ==1){
      continue;
    }
    
    vis[vert] = 1;
    dist[vert] = dis;
    
    for(int i=0;i<adj[vert].size();i++){
      pair<int, int> q = adj[vert][i];
      int ndis = q.first;
      int nvert = q.second;
      if(ndis + dist[vert] < dist[nvert]){
        dist[nvert] = ndis + dist[vert];
        s.insert({dist[nvert],nvert});
      }
    } 
  }
}
  int main(){
   int vertices,edges;
    cin>>vertices>>edges;
    for(int i=0;i<edges;i++){
     int x,y,z;
      cin>>x>>y>>z;
      adj[x].push_back({z,y});
      adj[y].push_back({z,x});
    }
    
    for(int i=0;i<=vertices;i++)
      dist[i] = INT_MAX;
    
    for(int i=0;i<=vertices;i++){
      cout<<i<<" : ";
      for(int j=0;j<adj[i].size();j++)
        cout<<"(" << adj[i][j].first << " " << adj[i][j].second <<") ";
        cout<<endl;
    }
    
    dijkstra(1);
    for(int i=1;i<=vertices;i++)
      cout << dist[i] << endl;
  }

