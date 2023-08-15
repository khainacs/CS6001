#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
  int turn;
  cin >> turn;
  
  while(turn--)
  {
    string str;
    cin >> str;
    int point = 0;
    int answer = 0;
    vector<bool> visisted(26, false);
    
    for (int i = 0; i < str.size(); i++)
    {
      if (visisted[str[i]] == false)
      {
        point += 1;
        visisted[str[i]] = true;
      }
      for (int j = i+1; j <= 26 && str.size(); j++)
      {
        if(visisted[str[j]] == true)
        {

          point = 0;
          break;
        }
      }
      answer = max(answer, point);
    }
    cout << answer << endl;
    std::fill(visisted.begin(), visisted.end(), false);
  }
}
