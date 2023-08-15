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
void floyWallshall(int vertex, vector<vector<int>> &dist, vector<vector<int>> &graph)
{
    dist.assign(vertex, vector<int>(vertex));
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            dist[i][j] = i  == j ? 0 : graph[i][j];
        }
    }
    
    for (int k = 0; k < vertex ; k++)
    {
        for (int i = 0; i < vertex; i++)
        {
            if (dist[i][k] >= INF) continue;
                for (int j =  0; j < vertex; j++)
                {
                if (dist[k][j] < INF && dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] =  dist[k][j] + dist[i][k];
                    //cout << dist[i][j] << endl;
                }
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j =0 ; j < 6 ; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void solve()
{
    fstream inputfile;
    inputfile.open("MATRAN53_2.INP", ios::in);
    //fstream inputfile("MATRAN52.INP");
    ofstream outfile("BAI52.OUT");
    int vertex;
    char start, end;
    //cout << " I am here" <<  endl;
    //inputfile >> vertex;
    while(inputfile >> vertex >> start >> end)
    {
        int u = start - 'A';
        int v = end - 'A';
        vector<vector<int>> graph(vertex, vector<int>(vertex, INF));
        vector<vector<int>> dist;
        vector<int> visited(vertex, false);
        for(int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
                int x;
                inputfile >> x;
                graph[i][j] = x;
            }
        }
        cout << vertex <<  " " << start << " " << end << endl;
        outfile << vertex << " " << start << " " << end << endl;
        
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
            if (graph[i][i] != 0)
            {
                isgraph = false;
                continue;
            }
            for (int j = 0; j < vertex; j++)
            {

                if (graph[i][j] !=  graph[j][i])
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
            cout << "is a direction graph" << endl;
            outfile << "is a direction graph" << endl;
        }
        else
        {
            cout << "is a undirection graph" << endl;
            outfile << "is a undirection graph" << endl;
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
        floyWallshall(vertex, dist, graph);
        
   
        cout << dist[u][v] << " ";
        outfile << dist[u][v] << " ";
        cout << endl;
    }
    outfile.close();
    inputfile.close();
    
}
int main()
{
    solve();
}
