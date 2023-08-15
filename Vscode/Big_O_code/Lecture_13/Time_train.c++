#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;
struct TimeTrain
{
  int start;
  int end;
  char station;
};

bool compare(TimeTrain A, TimeTrain B)
{
  return A.start < B.start;
}

int main()
{
  int test_case;
  cin >> test_case;
  char first_station = 'A', second_station = 'B';
  for(int index = 1; index <= test_case; index++)
  {
    int relax;
    cin >> relax;
    int raiway_A, raiway_B;
    cin >> raiway_A >> raiway_B;
    vector <TimeTrain> time_table;
    string time_start, time_end;
    for (int cnt = 0, i = 0; i < raiway_A+raiway_B; i++, cnt++)
    {
      cin >> time_start >> time_end;
      TimeTrain tmp;
      tmp.start = stoi(time_start.substr(0,2))*60 + stoi(time_start.substr(3, 5));
      tmp.end = stoi(time_end.substr(0,2))*60 + stoi(time_end.substr(3, 5));
      tmp.station = 'B';
      if (cnt < raiway_A)
      {
        tmp.station = 'A';
      }
      
      //cout << time_start << time_end << endl;
      time_table.push_back(tmp);
      //cout << time_start << " " <<   time_table[i].start<< endl;
      //cout << time_table[i].start << endl;
      //cout << time_table[i].end << endl;
     
  

    }
    sort(time_table.begin(), time_table.end(), compare);
    /*
    for (int i = 0; i < raiway_A+raiway_B; i++)
    {
      cout << time_table[i].start << " " << time_table[i].end <<" " << time_table[i].station << endl;
    }
    */
    
    priority_queue<int>heapA;
    priority_queue<int>heapB;
    int trainA = 0, trainB = 0;
    for (int i = 0; i < raiway_A+raiway_B; i++)
    {
       // consider intital both heap have not element
       if (time_table[i].station == first_station)
       {
         if (heapA.empty() == true)
         {
           trainA +=  1;
           heapB.push(time_table[i].end + relax);
           
         }
         else
         {
           if (time_table[i].start >= heapA.top())
           {
             heapA.pop();
             heapB.push(time_table[i].end + relax);
             
           }
           else
           {
             trainA += 1;
             heapB.push(time_table[i].end + relax);
             
           }
         }
         
       }
       else if (time_table[i].station == second_station)
       { 
         if (heapB.empty() == true)
         {
           trainB += 1;
           heapA.push(time_table[i].end + relax);
           
         }
         else
         {
           if (time_table[i].start >= heapB.top())
           {
             heapB.pop();
             heapA.push(time_table[i].end + relax);
            
           }
           else
           {
             trainB += 1;
             heapA.push(time_table[i].end + relax);
             
           }
         }
       }
    }
     cout << "Case #" << index << ": " << trainA << " " << trainB << endl;
     
  }
}