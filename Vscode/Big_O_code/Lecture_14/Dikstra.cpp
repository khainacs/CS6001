#include<iostream>
#include<queue>
#include<vector>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e9;
void dikstra(int number, vector<int> dist, vector<int> path, int vertices, vector<int> answer, vector<vector<pii>> adj)
{
  dist.assign(vertices, INF);
  path.assign({vertices, -1});
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({0, number});
  dist[number] = 0;
  while(!pq.empty())
  {
    pii tmp = pq.top();
    pq.pop();
    int u = tmp.second;
    if (tmp.first != dist[u]){
      continue;
    }
    for (int i = 0; i < adj[u].size(); i++){
      int v = adj[u][i].first;
      int w = adj[u][i].second;
      if (dist[v] > dist[u] + w  ){
        answer.push_back(v);
        dist[v] = dist[u] + w;
        path[v] = u;
        pq.push({dist[v], v});
      }
    }
  }
}
int main()
{
  vector<vector<pii>> adj;
  vector<int> dist;
  vector<int> path;
  int vertices, edge;
  vector<int> answer;
  adj.assign(vertices, vector<pii>());
  cin >> vertices >> edge;
  for (int i = 0; i < edge; i++)
  {
    int a, b, w;
    cin >> a >> b >> w;
    adj[a].push_back({b, w});
  }
  dikstra(1, dist, path, vertices, answer, adj);
  for(int i = 0; i < answer.size(); i++)
  {
    cout << answer[i];
  }
  
}