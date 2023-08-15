#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>> adjector;
vector<bool> visisted;
int ver = 0;
int edge = 0;
void bfs(int s)
{
  
  queue<int> Q;
  Q.push(s);
  visisted[s] = true;
  int u, v;
  while(Q.empty() == false)
  {
    u = Q.front();
    Q.pop();
    for (int i = 1; i <= adjector[u].size(); i++)
    {
      v = adjector[u][i];
      if (visisted[v] == false)
      {
        visisted[v] = true;
        ver += 1;
        edge += 1;
        Q.push(v);
      }
    }
  }
}
int main()
{
  int test_case = 1;
  //cin >> test_case;
  while(test_case--)
  {
    
    int n = 8, m = 6;
    ///int a[m][m];
    //arr = &a;
    //cin >> n >> m;
    adjector.assign(n, vector<int>());
    adjector[3].push_back(5); 
    adjector[5].push_back(3); 
    adjector[2].push_back(1); 
    adjector[1].push_back(2); 
    adjector[4].push_back(2); 
    adjector[2].push_back(4); 
    adjector[7].push_back(8);
    adjector[8].push_back(7); 
    adjector[2].push_back(7); 
    adjector[7].push_back(2); 
    adjector[8].push_back(4); 
    adjector[4].push_back(8);   
    /*        
    for (int i = 0; i < n; i++)
    {
      int u, v;
      cin >> u >> v;
      adjector[u].push_back(v);
      adjector[v].push_back(u);
    }
    */
    visisted.assign(n, false);
    int tree = 0, circle = 0;
    for (int i = 1; i <= n; i++)
    {
       if (visisted[i] == false)
        {
          //cout << i << " " << j << endl;
          int flag = true;
          ver += 1;
          bfs(i);
          if (ver != 2)
          {
            flag = false;
          }
          if (ver == (edge + 1) && flag == false)
          {
            tree += 1;
          }
          if (ver == edge)
          {
            circle += 1;
          }
          edge = 0;
          ver = 0;
      
        }
    }
    cout << tree << " " << circle<< endl;
  }
}