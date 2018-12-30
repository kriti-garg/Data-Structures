#include <iostream>
#include <vector>
using namespace std;
 int main() {
  int vertices;
  int edges;
// int adj[1000][1000];
  /*
 vector<int> p(1000);
  vector<int> adj[1000];
                                                                                                                              
  for(int i=0;i<1000;i++)
    adj[i].push_back(p);
  */
  vector<int> p(1000);
  vector< vector<int> > adj;
  for(int i=0;i<1000;i++)
    adj.push_back(p);
  /*
  int ar[10][1000];
  vector<int> p(1000);
  vector<vector<int> > adj;
  for(int i=0;i<10;i++)
  adj.push_back(p);
  int ar[n][k];
  vector<int> p(k);
  vector<vector<int> > adj;
  for(int i=0;i<n;i++)
  adj.push_back(p);
  vector<int> p(1000);
  */
  cin >> vertices >> edges;
  for(int i=0;i<edges;i++){
    int x,y;
    cin >> x >> y;
    adj[x][y] = 1;
    adj[y][x] = 1;
  }
  for(int q=0;q<vertices;q++)
    for(int i=0;i<vertices;i++)
      cout << adj[q][i] << " ";
}
 