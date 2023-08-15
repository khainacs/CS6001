#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    char str[50][21];
    int test_case;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        int n, k;
        long long v;
        cin >> n >> k;
        cin >> v;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }    
        v = (v-1) % (n*k);
        int current = 0;
        while(v--)
        {
            current = (current + k) % n;
        }
        cout << "Case #" << i << ":" << endl;
        for (int i = 0; i < k - (n - current); i++)
        {
            cout << str[i];
        }
        for(int i = current; i < min(n, current+k), i++)
        {
            cout << str[i]
        }
        cout << "\n";
    }

}