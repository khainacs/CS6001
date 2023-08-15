#include<iostream>
#include<vector>
using namespace std;
int one_task;
int repeat_task;
int start_time, end_time, repeat;
bool flag = true;
vector <int> mark(1e6+1,0);
void check(int start_time, int end_time)
{
  for(int i = start_time; i < end_time && i < 1000001; i++)
  {
      mark[i] = mark[i] + 1;
      ////cout << "hehe" << endl;
      if(mark[i] == 2)
      {
        flag = false;
        break;
        
      }
  }
}
int main()
{
  while(true)
  {
    cin >> one_task >> repeat_task;
    if (one_task == 0 && repeat_task == 0)
    {
      break;
    }
    for(int i = 1; i <= one_task; i++)
    {
      ///cout << "Heheh" << endl;
      cin >> start_time >> end_time;
      check(start_time, end_time);
      if (flag == false)
      {
        break;
      }
    }
    for(int i = 1; i <= repeat_task; i++)
    {
      cin >> start_time >> end_time >> repeat;
      while(start_time < 1000000)
      {
        check(start_time, end_time);
        if (flag == false)
        {  
        	break;
        }
        start_time += repeat;
        end_time += repeat;
      }
    }
    if (flag == false)
    {
      cout << "CONFLICT" << endl;
    }
    else
    {
      cout << "NO CONFLICT" << endl;
    }
  }
}