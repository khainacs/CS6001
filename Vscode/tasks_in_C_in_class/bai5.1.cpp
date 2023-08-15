//nguyễn anh khải 2180606961
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int, int> pii;
const int INF = 1e8;
void dfs(int vertex, int u, vector<vector<int>> &graph, vector<int> &visited)
{
    for(int next = 0; next < vertex; next++)
    {
        if (graph[u][next] != 0 && !visited[next])
        {
            visited[next] = true;
            dfs(vertex, next, graph, visited);
        }
    }
}
void dijkstra(int vertex, int s, vector<vector<int>> &graph, vector<int> &dist)
{
    priority_queue<pii, vector<pii>, greater<pii>> minheap;
    minheap.push({0, s});
    dist[s] = 0;
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
                minheap.push({dist[v], v});
            }
        }
    }
}
void solve()
{
    fstream inputfile;
    inputfile.open("MATRAN51.inp", ios::in);
    //fstream inputfile("MATRAN52.INP");
    ofstream outfile("BAI51.OUT");
    int vertex, start, end;
    while(inputfile >> vertex >> start >> end)
    {
        vector<vector<int>> graph(vertex, vector<int>(vertex));
        vector<int> visited(vertex, false);
        vector<int> dist(vertex, INF);
        for(int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
                int x;
                inputfile >> x;
                graph[i][j] = x;
            }
        }
        
        
        cout << vertex << endl;
        outfile << vertex << endl;
        
        for(int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
            cout << graph[i][j] << " ";
            outfile << graph[i][j] << " ";
            }
            cout << endl;
            outfile << endl;
        }
        int isgraph = true;
        int direct = false;
        for (int i = 0; i < vertex; i++)
        {
            if (graph[i][i] == 0)
            {
                isgraph = false;
            }
            for (int j = 0; j < vertex; j++)
            {
                if (graph[i][j] != graph[j][i])
                {
                    direct = true;
                }
            }
        }
        if (isgraph)
        {
            cout << "is a graph" << endl;
            outfile << " is a graph" << endl;
        }
        if (direct)
        {
            cout << "This is direct\n";
            outfile << "This is direct\n";
        }
        else
        {
            cout << "This is undirected\n";
            outfile << "This is undirected\n";

        }

        int iscomponet = 0;
        for (int i = 0; i < vertex; i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                dfs(vertex, i, graph, visited);
                iscomponet++;
            }
        }
        if (iscomponet > 0)
        {
            cout << "have a component" << endl;
            outfile << "have a component" << endl;
        }
        else
        {
            cout << "have not a component" << endl;
            outfile << "have not a component" << endl;
        }
        dijkstra(vertex, start, graph, dist);
        if (dist[end] == INF)
        {
            cout << "have not line" << endl;
            outfile << "have not line" << endl;
        }
        else
        {
            cout << dist[end] << endl;
            outfile << dist[end] << endl;
        }
        
        
    }
    outfile.close();
    inputfile.close();
}
int main()
{
    solve();
}