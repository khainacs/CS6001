#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int test_case;
  cin >> test_case;
  for (int index = 0; index < test_case; index++)
  {
    int surprsing, googler, p;
    cin >> googler >> surprsing >> p;
    vector <int> scores;
    for (int i = 1; i <= googler; i++)
    {
      cin >> scores[i];
    }
    int count = 0;
    for (int j = 0; j < googler; j++)
    {
      cout << "hehe" << endl;
      if (surprsing == 0)
      {
        if (scores[j] > 2*p-2)
        {
          count =+1;
        }
       
      }
      else
      {
        if (scores[j] > 2*p-4 && scores[j] < 2*p-2)
        {
          count += 1;
          surprsing -= 1;
        }
        
      }
    }
    cout << "Case #" << index << " : " << count << endl;
  }
}