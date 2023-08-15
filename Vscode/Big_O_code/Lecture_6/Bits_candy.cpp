#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
string bar[16] = {"Unknown candy bar!", "Planters", "Reeses_Pieces", "Unknown candy bar!","Sugar_Babies","Pay_Day","Unknown candy bar!","Unknown candy bar!","Hersheys","Goobers", "Reeses_Cups","Nutrageous","Caramello","Baby_Ruth","Milky_Way","Snickers"};
vector <int> a;
string lastOp = ".";
void solve()
{
   
    string input;
    getline(cin, input);
    stringstream ss(input);
    string s;
    int index = 0;
    while (ss >> s)
    {
        if (s != "~" && s != "&" && s != "|")
        {
            int i = 0;
            int count = 0;
            while(s[0] == '~')
            {
                count++;
                s.erase(0,1);
                i++;
            }
            index = 0;
            while (true)
            {
                if (s == bar[index])
                {
                    break;
                }
                index++;
            }
            ///cout << "index: " << index << endl;
            while(count != 0)
            {
                index = (~index) & 0xF;
                count--;
            }
            ///cout << "lastOp: " << lastOp << endl;
           if (lastOp == "&")
           {
                a[a.size() - 1] = index & a.back();
                
           }
           else
           {
               a.push_back(index);
           }
        }
        else
        {
           lastOp = s;
        }
    }
    int answer = 0;
    for (int i = 0; i < int(a.size()); i++)
    {
        answer = a[i] | answer;
    }
    cout << bar[answer] << endl;
   

}   
int main()
{

    int T;
    cin >> T;
    getchar();
    while(T--)
    {
        solve();
        lastOp = ".";
        a.clear();
    }

}