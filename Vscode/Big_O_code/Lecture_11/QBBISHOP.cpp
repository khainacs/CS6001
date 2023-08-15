#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<bool>> chessboard;
vector<vector<bool>> visisted;
int main()
{
  int n, m, p, q, s, t;
  cin >> n >> m >> p >> q >> s >> t;
  visisted.assign(n+1, vector<bool>(false));
  chessboard.assign(n+1, vector<bool>(false));
  while(m--)
  {
    int x, y;
    cin >> x >> y;
    chessboard[x][y] = true;
  }
  queue <pair<int, int>> Q;
  Q.push({p, q});
  chessboard[p][q] = true;
  while(!Q.empty())
  {
    int count = 0;
    Q.pop();
    for (int i = 1; i + q <= n && i + p <= n; i++)
    {
        if (chessboard[i+p][i+q] == false)
        {
            int row = i+p, column = i+q;
            if (visisted[row][column] == false)
            {
                visisted[row][column] = true;
                count += 1;
                Q.push({row, column});
                if (row == s && column == t)
                {
                    cout << count << endl;
                    return 0;
                }
            }
        }
        else
        {
          break;
        }
    }
    for (int i = 1;  1 <= p - i  && q + i <= n; i++)
    {
        if (chessboard[p - i][q + i] == false)
        {
            int row = p - i, column = q + i;
            if (visisted[row][column] == false)
            {
                visisted[row][column] = true;
                count += 1;
                Q.push({row, column});
                if (row == s && column == t)
                {
                    cout << count << endl;
                    return 0;
                }
            }    
        }
        else
        {
            break;
        }
    }
    for (int i = 1; 1 <= p - i &&  1 <= q - i; i++)
    {
        if (chessboard[p+i][q-i] == false)
        {
            int row = p -i, column = q-i;
            if (visisted[row][column] == false)
            {
                visisted[row][column] = true;
                count += 1;
                Q.push({row, column});
                if (row == s && column == t)
                {
                    cout << count << endl;
                }
            }
 
        }
        else
        {
            break;
        }
    }
    for (int i = 1; p + i <= n && 1 <= q - i; i++)
    {
      if (chessboard[p+1][q-1] == false)
      {
        int row = p - i, column = q -i;
        if (visisted[row][column] == false)
        {
          visisted[row][column] = true;
          count += 1;
          Q.push({row, column});
        }
        if (row == s && column == t)
        {
          cout << count << endl;
        }
      }
      else
      {
        break;
      }
    }
  }  
  cout << "-1" << endl;
}