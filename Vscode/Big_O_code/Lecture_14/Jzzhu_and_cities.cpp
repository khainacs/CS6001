
/*
1 to n city
	m roads connecting the citíes

*/
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<fstream>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e9;
void dkjstra(vector<vector<pii>> &adj, vector<int> &dist){
  priority_queue<pii, vector<pii>, greater<pii>>minheap;
  minheap.push({0, 1});
  dist[1] = 0;
  while(!minheap.empty()){
    pii tmp = minheap.top();
    minheap.pop();
    int u = tmp.second;
    if (tmp.first  != dist[u]){
      continue;
    }
    for (int i = 0; i < adj[u].size(); i++){
      int v = adj[u][i].first;
      int weight = adj[u][i].second;
      if (dist[v] > dist[u] + weight){
        dist[v] = dist[u] + weight;
        minheap.push({dist[v], v});
      }
    } 
  }
}
void install()
{
  int vertices, edge, trains;
  cin >> vertices >> edge >> trains;
  vector<vector<pii>> adj(vertices+1, vector<pii>());
  vector<int> dist(vertices+1, INF);
  for (int i = 0; i < edge ; i++){
    int u, v, x;
    cin >> u >> v >> x;
    adj[u].push_back({v, x});
    adj[v].push_back({u, x});
  }
  vector <pii> queries;
  dkjstra(adj, dist);
  int answer = 0;
  for (int i = 0; i < trains; i++){
    int arrival, length;
    cin >> arrival >> length;
    if (length >= dist[arrival]){
      answer += 1; 
    }
  }
  cout << answer << endl;
}
int main(){
  fstream myfile;
  myfile.open(example.txt);
  long long 
  while()
  {

  }
}
