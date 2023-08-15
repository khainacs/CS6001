#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> adj;
vector<int> visisted;
vector<int> path;
int mark = -1;
int flag = false;
int state;
void dfs(int s)
{
    visisted[s] = 0;
    for (int i = 0; i < adj[s].size(); i++)
    {
        if (mark == -1)
        {
            break;
        }
        if (visisted[i] == 0)
        {
            mark = i;
            path[i] = s;
        }
        if (visisted[i] == -1)
        {
            visisted[i] = 0;
            path[i] = s;
            dfs(i);
        }
    }
    visisted[s] = 2;
}
void dfs_new(int s, vector<int> cycle, int index)
{
    visisted[s] = 0;
    for (int i = 0; i < adj[s].size(); i++)
    {
        int next_edge = adj[s][i];
        if (s == cycle[index] && next_edge == cycle[index+1])
        {
            continue;
        }
        if(visisted[i] == 0)
        {
            flag = true;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i< m; i++)
    {
        int edge_1, edge_2;
        cin >> edge_1 >> edge_2;
        adj[edge_1].push_back(edge_2);
    }
    visisted.assign(n+2, -1);
    path.assign(n+2, -1);
    for (int i = 1; i <= n; i++)
    {
        if (visisted[i] == -1)
        {
            dfs(i);
        }
    }
    int ancestor = -1;
    ancestor = mark;
    vector<int> cycle;
    do 
    {
        cycle.push_back(mark);
        mark = path[mark];
    }while(mark != ancestor);
    cout << mark << endl;
    cycle.push_back(mark);
    reverse(cycle.begin(), cycle.end());
    vector<pair<int,int>> answer;
    std::fill(visisted.begin(), visisted.end(), -1);
    for (int i = 0; i < cycle.size(); i++)
    {
        flag = false;
        for (int j = 1; j <= n; j++)
        {
            if (visisted[j] == -1)
            {
                dfs_new(j, cycle, i);
            }
            if (flag == false)
            {
                answer.push_back({j, j+1});
            }
        }
        std::fill(visisted.begin(), visisted.end(), -1);
    }
    if (answer.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i].first << " " << answer[i].second << endl;
        }
    }
    return 0;
}