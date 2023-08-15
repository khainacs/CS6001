#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e9;

void dijkstra(int start, int end, vector<vector<pii>> matrix, vector<int> &dist)
{
  priority_queue<pii, vector<pii>, greater<pii>>minheap;
  minheap.push({0, start});
  dist[start] = 0;
  while(!minheap.empty())
  {
    pii tmp = minheap.top();
    minheap.pop();
    int u = tmp.second;
    if (u == end)
    {
      break;
    }
    if (tmp.first != dist[u])
    {
      continue;
    }
    for (int i = 0; i < matrix[u].size(); i++)
    {
      int v = matrix[u][i].first;
      int length = matrix[u][i].second;
      if (length >= 0 && dist[v] < dist[u] + length)
      {
        dist[v] = dist[u] + length;
        minheap.push({dist[v], v});
      }
    }
  }
}

void install()
{
  int doom_ray;
  cin >> doom_ray;
  vector<vector<pii>> matrix(doom_ray+1, vector<pii>());
  vector<int>dist(doom_ray+1, INF);
  for (int i = 0; i < doom_ray; i++)
  {
    for (int j = 0; j < doom_ray; j++)
    {
      int length;
      cin >> length;
      matrix[i].push_back({j, length});
    }
  }
  dijkstra(0, 1, matrix, dist);
  cout << dist[1] << endl;
  /*
  for (int i = 0; i < doom_ray; i++)
  {
    for (int j = 0; j < doom_ray; j++)
    {
      cout << matrix[i][j].second << " ";
    }
    cout << endl;
  }
  cout << endl;
  */
  if (dist[1] == 0)
  {
    cout << "Back to the drawing board" << endl;
  }
  else
  {
    cout << "No more hedgehog troubles" << endl;
  }
}
int main()
{
  int test_case;
  cin >> test_case;
  while(test_case--)
  {
    install();
  }
}