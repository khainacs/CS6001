//nguyễn anh khải 2180606961
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e8;
void dijkstra(int vertex, int start, vector<vector<int>> &graph, vector<int> &dist, vector<int> &path)
{
    priority_queue<pii, vector<pii>, greater<pii>> minheap;
    minheap.push({0, start});
    dist[start] = 0;
    while(!minheap.empty())
    {
        pii tmp = minheap.top();
        minheap.pop();
        int u = tmp.second;
        if (tmp.first != dist[u]) continue;
        for(int v = 0; v < vertex; v++)
        {
            int w = graph[u][v];
            if (w == 0) continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                path[v] = u;
                minheap.push({dist[v], v});
            }
        }
    }
}
void findset(int u, int start, vector<int>&path, vector<int> &distance, vector<int> &dist)
{
    if (u != start)
    {
        findset(path[u], start, path, distance, dist);
    }
    distance.push_back(u);
    cout << u << " ";
}
void solve()
{
    fstream inputfile;
    inputfile.open("MBUS.INP");
    ofstream outfile("MBUS_1.OUT");
    int vertex, start, end;
    while(inputfile >> vertex >> start >> end)
    {
        vector<vector<int>> graph(vertex, vector<int>(vertex));
        vector<int> visited(vertex, false);
        vector<int> dist(vertex, INF);
        vector<int> path(vertex, -1);
        vector<int> distance;
        for(int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
                int x;
                inputfile >> x;
                graph[i][j] = x;
            }
        }
        dijkstra(vertex, start, graph, dist, path);
        findset(end, start, path, distance, dist);
        cout << endl;
        int answer = 0;
        for (auto i: distance)
        {
            outfile << i << " ";
            if (i == end)
            {
                answer += dist[i];
            }
        }
        outfile << endl;
        cout << answer << endl;
        outfile << answer << endl;
    }
    outfile.close();
    inputfile.close();
}
int main()
{
    solve();
}