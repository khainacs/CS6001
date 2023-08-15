#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int compare(string str1, string str2)
{
  ///cin >> str1;
  ///cin >> str2;
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
  
  int result = 0;
  for(char i = 'a'; i < 'z'; i++)
  { 
    int count1 = 0;
    int count2 = 0;
    for (int index = 0; index < str1.length(); index++)
    {
      if (i == str1[index])
      {
        count1 += 1;
      }
    }
    for (int index_k = 0; index_k < str2.length(); index_k++)
    {
      if (i == str2[index_k])
      {
        count2 += 1;
      }
    }
    result += abs(count1 - count2);
  }
  return result;
}
int main()
{
  string str1 = "ptnk";
  string str2 = "thpt";
  compare(str1, str2);
}