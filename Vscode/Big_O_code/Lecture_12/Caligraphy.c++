#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string s;
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    cin >> s;
    //cout << s;
	int ps = 0;
    int l[s.length()] = {-1};
    int r[s.length()] = {-1};
    int high = 0, low = s.length();
    //cout << s.length();
    for (int i = 1; i <= s.length(); i ++)
    {
      if (s[i] == '-1')
      {
        ps++;
      }
      else
      {
        ps++;
      }
      cout << ps << endl;
      low = min(ps, low);
      high = max(high, ps);
      if (l[ps ] == -1)
      {
        l[ps] = i;
      }
      r[ps] = i; 
    }
    /*
    cout << high << " " << low << endl;
    for (int i = low; i<= high; i++)
    {
      cout << l[i] << endl;
    }
    /*
    int result = 0;
    int comp = s.length() + 1;
    for (int i = low; i <= high; i++)
    {
      result = max( r[i] - comp, result);
      if (l[i+ s.length()] != -1)
      {
         comp = min(comp, l[i]);
      }
    }
    cout << result << endl;
    */
  }
}