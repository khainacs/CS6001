#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  int test_case;
  cin >> test_case;
  string path = "/";
  string s;
  string cmd;
  vector <string> screen;
  while(test_case--)
  {
    int number;
    cin >> number;
    while(number--)
    {
        cin >> cmd;
      if (cmd == "pwd")
      {
        cout << path << endl;
      }
      else 
       {
            cin >> s;
            path = "";
            if (s[0] == '/' && s[1] == 'h' && s[2] == 'o' && s[3] == 'm' && s[4] == 'e' && (int)(s.size()) == 5)
            {
              screen.push_back(s);
              continue;
            }
            stringstream str(s);
            string word;
            while(getline(str, word, '/'))
            {
                if (word == "..")
                {
                    screen.pop_back();
                }
                else
                {
                    screen.push_back(word);
                }
            }
            for (auto i : screen)
            {
                path.append(i);
                path.push_back('/');
            }
            ///std::fill(screen.begin(), screen.end(), '*');
            screen.clear();
        }
    }
  }
}