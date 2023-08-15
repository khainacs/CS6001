/*
very business can make use of a good accountant and,
if they're not big on following the law, sometimes a bad one.
Bad accountants try to make more money for their employers by fudging numbers
without getting caught.

Sometimes a bad accountant wants to make a number larger, and sometimes smaller. 
It is widely known that tax auditors will fail to
notice two digits being swapped in any given number,
 but any discrepancy more egregious will certainly be caught.
It's also painfully obvious when a number has fewer digits than it ought to, 
so a bad accountant will never swap the first digit of a number with a 0.

Given a number, how small or large can it be made without being found out?
*/
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    int test_case;
    int number;
    cin>> test_case;
    for (int index = 1; index <= test_case; index++)
    {
        cin>> number;
        string str = to_string(number);
        string largest(str), smallest(str);
        cout<< "line 31"<< " " << largest << " " << smallest << "\n";
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
           for (int j = i + 1; j < len; j++)
           {    
              string tmp(str);
              cout << "line 38" << " " << tmp << "\n";
              swap(tmp[i], tmp[j]);
              if (tmp[0] != '0')
              {
                smallest = min(smallest, tmp); 
              }
              largest = max(largest, tmp);
            }
            cout << "line 46" << " " << smallest << " " << largest;
            cout << "\n";
           
        }

        cout << "case #" << index << ": ";
        cout << smallest << " " << largest << "\n";
        
    }
    return 0;

}

