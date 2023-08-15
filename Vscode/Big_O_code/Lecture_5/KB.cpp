#include<iostream>
#include<string>
#include<vector>
using namespace std;
void counting(string str, int length)
{
    ///cin >> length;
    ///cin >> str;
    vector <int> count(200);
    for (int i = 0; i < length; i++)
    {
        count[int(str[i])]++;
    }
    int result = 0;
    int answer = -1;
    if (str.length > 26)
    {
        cout << answer << endl;
        break;
    }
    for (int i = 97; i <= 122; i++)
    {
        if (count[i] > 1 && result <= 26)
        {
           result += (count[i] - 1); 
        }
        else if (result > 26)
        {
            break;
        }
    }
    if (result > 26)
    {
        cout << answer << endl;
    }
    else 
    {
        cout << result << endl;
    }
    
}
int main()
{
    string str = "deoinpsaoydljthbcuyxhdbqqximjwcqqphvkmjsi";
    int length = 41;
    counting(str, length);
}