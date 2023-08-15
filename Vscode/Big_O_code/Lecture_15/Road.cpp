/*
the idea is simple, construct new roads.
Each node will denote a station and edge will represent a road.
Node : Nodes will be simple 2-D geometric points
Edge: the cost to travel a road is proportional to the Euclidian distance between two nodes.
*/
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
const int INF = 1e8;
void  FloyWallShall(int node, vector<vector<int>> matrix,  vector<vector<int>> &dist)
{
  for (int i = 1; i <= node; i++)
  {
    for (int j = 1; j <= node; j++)
    {
      dist[i][j] = i == j ? 0: matrix[i][j];
    }
  }
  for (int k = 1; k <= node; k++)
  {
    for (int i = 1; i <= node; i++)
    {
      if (dist[i][k] >= INF) continue;
      for (int j = 1; j <= node; j++)
      {
        if (dist[k][j] < INF && dist[i][j] > dist[i][k] + dist[k][j])
        {
          dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
  }
}
void FloyWallShall_(int node, vector<vector<int>> matrix, vector<vector<int>> &CurDist, vector<vector<int>> PreDist, int distance, int u, int v, int &C)
{
  for (int i = 1; i <= node; i++)
  {
    for (int j = 1; j <= node; j++)
    {
      CurDist[i][j] = min( PreDist[i][u] + distance + PreDist[v][i], PreDist[i][v] + distance + PreDist[u][j], PreDist[i][j]);
      C += PreDist[i][j] - CurDist[i][j];
    }
  }
}
void installing(int flag)
{
  int node, edge;
  cin >> node >> edge;
  vector<vector<int>> matrix(node+1, vector<int>(node+1, INF));
  vector<vector<int>> PreDist(node+1);
  vector<vector<int>> CurDist(node+1);
  vector<pair<int, int>> vertice(node+1);
  for (int i = 0; i < node; i++)
  {
    int mark_1, mark_2;
    cin >> mark_1 >> mark_2;
    vertice[i] = {mark_1, mark_2};
  }
  for (int i = 0; i < edge; i++)
  {
    int node_1, node_2;
    cin >> node_1 >> node_2;
    int length = (vertice[node_1].first - vertice[node_2].first)*(vertice[node_1].first - vertice[node_2].first) + (vertice[node_1].second - vertice[node_2].second) * (vertice[node_1].second - vertice[node_2].second);
    length = sqrt(length);
    matrix[node_1][node_2] = length;
    matrix[node_2][node_1] = length;
  }
  FloyWallShall(node, matrix, PreDist);
  int C = 0;
  int maxC = 0;
  int minDistance = 0;
  pair<int, int> answer;
  for (int u = 1; u <= node; u++)
  {
    for (int v = u + 1; v <= node; v++)
    {
      int distance = (vertice[u].first - vertice[v].first)*(vertice[u].first - vertice[v].first) + (vertice[u].second - vertice[v].second) * (vertice[u].second - vertice[v].second);
      distance = sqrt(distance);
      FloyWallShall_(node, matrix, CurDist, PreDist, distance, u, v, C);
      if( C > maxC)
      {
        answer = {u, v};
        maxC = C;
        minDistance = CurDist[u][v];
      }
      else
      {
        if (CurDist[u][v] < minDistance) 
        {
						answer = { u, v };
						maxC = C;
						minDistance = CurDist[u][v];
				}
      }
    }
  }
  if (answer.first == 0 && answer.second == 0) {
			cout << "No road required\n";
		}
		else {
			cout << answer.first << " " << answer.second << "\n";
		}
}
int main()
{
  int flag = true;
  while(flag == true)
  {
    installing(flag);
  }
}