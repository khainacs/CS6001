#include<iostream>
#include<stack>
using namespace std;
int main()
{
  int Q;
  cin >> Q;
  while(Q--)
  {
    stack <int> shelf;
    int a, b;
    cin >> a;
    if (a == 1)
    {
      cin >> b;
      shelf.push(b);
    }
    else 
    {
      if (shelf.empty())
      {
        cout << "kuchibhi?" << endl;
      }
      else
      {
        cout << shelf.top() << endl;
        shelf.pop(); 
      }
      
    }
    
  }
}