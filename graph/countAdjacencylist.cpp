#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int vertices,edges,count=0;
    vector<int> adj[10000];
    cin>>vertices>>edges;
    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        adj[y].push_back(x);
    }
    cout<<"Faulty workstation are:"<<endl;
    for(int i=1;i<=vertices;i++){
            if(adj[i].size()==0)
           {
               cout<<i<<endl;
               count++;
           }
    }
    cout<<"Total Faulty workstation are:"<<endl<<count;
   
}