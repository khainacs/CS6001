#include<iostream>
#include<vector>
#include<queue>
#include<functional>

const int INF = 1e8;
void FloyWallShard(int node, vector<vector<int>> &matrix, vector<vector<int>> &dist,  vector<vector<int>> &path)
{
  for (int i = 1, i <= node; i++)
  {
    for (int j = 1; j <= node; j++)
    {
      dist[i][j] = i == j ? 0: matrix[i][j];
      if (i != j || dist[i][j] < INF)
      {
        path[i][j] = i;
      }
      else
      {
        path[i][j] = -1;
      }
    }
  }
  for(int k = 1; k <= node; k++)
  {
    for (int i = 1; i <= node; i++)
    {
      if (dist[i][j] >= INF) continue;
      for (int j = 1; k <= node; j++)
      {
        if (dist[k][j] < INF && dist[i][j] > dist[i][k] + dist[k][j])
        {
          dist[i][j] = dist[i][k]  + dist[k][j];
          path[i][j] = path[k][j];
        }
      }
    }
  }
}
void installing()
{
  int node, require;
  cin >> node >> repuire;
  vector<vector<int>> matrix(node+1, vector<>(node+1, INF));
  vector<vector<int>> dist(node +1, vector<int>(node + 1));
  vector<vector<int>> path(node+1, vector<int>(node + 1));
  vector<vector<int>> queries(node+1, vector<int>(node+1));
  for(int i = 0; i < require; i++)
  {
    int vertice, edge, length;
    cin >> vertice >> edge >> weight;
    matrix[vertice][edge] = weight;
    queries[vertice][edge] = weight;
  }
  FloyWallShard(node, matrix, dist, path);
  for ( int i = 1; i <= node; i++)
  {
    for (int j = 1; j <= node; i++)
    {
      if (dist[i][j] != queries[i][j])
      {
        cout << "Inpossible" << enddl;
      }
      cout << dist[i][j] << " ";
    }
    cout << endl;
  }
}
int main()
{
  int test_case;
  cin >> test_case;
  while(test_case--)
  {
    installing();
  }
}