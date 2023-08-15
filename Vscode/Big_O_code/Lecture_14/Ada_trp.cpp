#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e9;
void dijkstra(int node_intital,  vector<vector<pii>> &adj, vector<int> &dist, int &biggest_dist, int &number_place, int vertices){
  dist.assign(vertices+1, INF);
  priority_queue<pii, vector<pii>, greater<pii>> Q;
  Q.push({0, node_intital});
  dist[node_intital] = 0;
  while(!Q.empty()){
    pii tmp = Q.top(); 
    Q.pop();
    int node = tmp.second;
    if (tmp.first  != dist[node]){
      continue;
    }
    for (int i = 0; i < adj[node].size(); i++){
       int v = adj[node][i].first;
       int weight = adj[node][i].second;
       if (dist[v] > dist[node] + weight){
         dist[v] = dist[node] + weight;
         biggest_dist = max(biggest_dist, dist[v]);
         number_place += 1;
         Q.push({dist[v], v});
       }
    }
  }
}

int main(){
  int vertices, edge, number_queries;
  vector<vector<pii>> adj(vertices, vector<pii>());
  cin >> vertices >> edge >> number_queries;
  vector<int> dist;
  for (int i = 0; i < vertices; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
    adj[b].push_back({a, c});
  }
  for (int i = 0; i < number_queries; i++){
    int queries;
    cin >> queries;
    int biggest_dist = 0;
    int number_place = 0;
    number_place += 1;
    dijkstra(queries, adj, dist, biggest_dist, number_place, vertices);
    
    //cout << dist.size();
    
    for (int j = 0; j < dist.size() - 1; j++){
      if (dist[j] == biggest_dist){
        cout << dist[j] << " " << number_place << endl;;
        break;
      }
     //cout << number_place << endl;
    }
    
  }
}