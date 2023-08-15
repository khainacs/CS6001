#include<iostream>
#include<queue>
using namespace std;
int main()
{
  queue<int> lane, school[5];
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    char type;
    cin >> type;
    if(type == 'E')
    {
        int x, y;
        cin >> x >> y;
        school[x].push(y);
        int flag = 0;
        while(lane.empty() == false)
        {
          if (lane.front() == x)
          {
            flag = 1;
          }
          break;
        }
        if (flag == 0)
        {
          lane.push(x);
        }
        
    }
    else
    {
      cout << lane.front() << " " << school[lane.front()].front() << endl;
      school[lane.front()].pop();
      if (school[lane.front()].empty())
      {
        lane.pop();
      }
    }
  }
}