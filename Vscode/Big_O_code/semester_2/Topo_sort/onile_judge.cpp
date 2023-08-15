/*
Sandro is a well organised person. 
Every day he makes a list of things which need to be done and enumerates them from 1 to n. 
However, some things need to be done before others. 
In this task you have to find out whether Sandro can solve all his duties and if so, print the correct order.
Input

In the first line you are given an integer n and m (1<=n<=10000, 1<=m<=1000000). 
On the next m lines there are two distinct integers x and y, (1<=x,y<=10000) describing that job x needs to be done before job y.

Output

Print "Sandro fails." if Sandro cannot complete all his duties on the list. 
If there is a solution print the correct ordering, the jobs to be done separated by a whitespace. 
If there are multiple solutions print the one, whose first number is smallest, 
if there are still multiple solutions, print the one whose second number is smallest, and so on.


*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool topo(int vertex, vector<vector<int>> &graph, vector<int> &result, vector<int> &indegree)
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    for (int i = 1; i <= vertex; i++)
    {
        if (indegree[i] == 0)
        {
            minheap.push(i);
        }
    }
    while(!q.empty())
    {
        int u = minheap.front();
        minheap.pop();
        result.push_back(u);
        for (auto i: grarph[u])
        {
            indegree[i]--;
            if (indegree[i] == 0)
            {
                minheap.push(i);
            }
        }
    }
    return result.size() == vertex;
}
void solve()
{
    int vertex, edge;
    cin >> vertex >> edge;
    vector<vector<int>> graph(vertex+1, vector<int>());
    vector<int> indegree(vertex+1);
    vector<int> result;
    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    if(!topo(vertex, graph, result, indegree))
    {
        cout << "Sandro fails" << endl;
    }
    else
    {
        for (auto i: result)
        {
            cout << i << " ";
        }
    }

}
int main()
{
    solve();
}