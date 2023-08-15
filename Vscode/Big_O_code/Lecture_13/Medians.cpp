/*
find medai of the list that is any order(not non- decreasing order as mentioned above)
 Whenever -1−1 is given as input, you must output the median of the list, and remove it from the list.

*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void add_number(int number, priority_queue<int> &left_half, priority_queue<int, vector<int>, greater<int>> &right_half)
{
  //cout  << "hehehhe" << endl;
  if (left_half.empty() == true || number < left_half.top() )
  {
     left_half.push(number);
     //cout << left_half.size() << endl;
     
  }
  else
  {
    right_half.push(number);
    //cout << right_half.size() << endl;
  }
}
void rebalance(priority_queue<int> &left_half, priority_queue<int, vector<int>, greater<int>> &right_half)
{
  if (right_half.empty() == false && left_half.empty() == false && (int)right_half.size() - (int)left_half.size() >= 2 )
  {
    left_half.push(right_half.top());
    right_half.pop();
  }
  if (right_half.empty() == false && left_half.empty() == false && (int)left_half.size() - (int)right_half.size()  >= 2 )
  {
    right_half.push(left_half.top());
    left_half.pop();
  }
}
int main()
{
  
  int number;
  int test_case;
  cin >> test_case;
  while(test_case--)
  {
    priority_queue<int> left_half;
    priority_queue<int, vector<int>, greater<int>> right_half;
    while(true)
    {
      cin >> number;
      //cout  << number << endl;
      if (number == 0)
      {
        //cout << "hehehe" << endl;
        break;
      }
      if(number == -1)
      {
          if ( left_half.empty() == false &&  left_half.size() == right_half.size() )
          {
            cout << "hehe" << endl;
            cout << left_half.top() << endl;
            left_half.pop();
            rebalance(left_half, right_half);
          }
          else if (right_half.empty() == false && left_half.size() != right_half.size())
          {
            cout << right_half.top() << endl;
            right_half.pop();
            rebalance(left_half, right_half);
          }
      }
      else
      {
        //cout << "heheh" << endl;
        add_number(number, left_half, right_half);
        rebalance(left_half, right_half);
      }
    }
  }
}