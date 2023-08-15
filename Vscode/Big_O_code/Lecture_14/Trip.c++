#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<int, int> pii;

bool BFS(int x, vector<vector<pii>> adj, int vertices){
  int visisted[3][vertices+1] = {false};
  int count = 0;
  queue<pair<int, int>> Q;
  Q.push({1, 0});
  visisted[0][1] = true;
  while(!Q.empty()){
    int node = Q.front().first;
    int flag = Q.front().second;
    //cout << "node " << node << " flag" << flag << endl;
    Q.pop();
    if (node == vertices){
      return true;
    }
    for (int i = 0; i < adj[node].size(); i++){
      //cout << "hehe" << endl;
      int flag2 = flag;
      int v = adj[node][i].first;
      long long weight = adj[node][i].second;
      //cout << u << endl;
      if (flag2 == 0 || (flag2 == 1 && weight <= x)){
        if (weight > x){
          flag2 = 1;
          count += 1;
        }
        if (visisted[flag2][v] == false){
          visisted[flag2][v] = true;
          Q.push({v, flag2});
        }
      }
    }
  }
  if (count == 1)
  {
    return true;
  }
  return false;
}

int main(){
 
  int vertices, edge;
  cin >> vertices >> edge;
  vector<vector<pii>> adj;
  adj.assign(vertices+1, vector<pii>());
  vector<int> length;
  length.push_back(0);
  for(int i = 0; i < edge; i++){
    int x, y, z;
    cin >> x >> y >> z;
    adj[x].push_back({y, z});
    adj[y].push_back({x, z});
    length.push_back(z);
    
  }
  /*
  for (int i = 0; i < adj.size(); i++)
      {
          for (int j = 0; j < adj[i].size(); j++)
          {
              cout << adj[i][j].first << " " << adj[i][j].second << " ";
          }    
          cout << endl;
      }
  */
  sort(length.begin(), length.end());
  /*
  for (int i = 0; i < length.size(); i++)
  {
    cout << length[i] << " ";
  }
  cout << endl;
  */
  int right = length.size() - 1;
  int left = 0;
  int answer = 1e9;
  while(left <= right){
    //cout << "hehe" << endl;
    
    int mid = left + (right - left) / 2;
    //cout << length[mid] << endl;
    if (BFS( length[mid], adj, vertices) == true){
      answer = min(length[mid], answer);
      //cout << answer << endl;
      //cout << "hehe" << endl;
      right = mid - 1;
      
    }
    else{
      left = mid + 1;
     
    }
  }
  
  cout << answer << endl;
  
  
}

  