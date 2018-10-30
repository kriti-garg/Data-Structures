#include <iostream>
#include <vector>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  int vertices;
  int edges;
  
  vector<int>adj[10000];
  
  cin >> vertices >> edges;
  for(int i=0;i<edges;i++){
    int x,y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int q=0;q<10000;q++){
    cout << q << ": ";
    for(int i=0;i<adj[q].size();i++)
      cout << adj[q][i] << " ";
    cout << endl;
  }
}
  