#include<iostream>
using namespace std;
int main()
{
    long long n, k;
    long long m = 1;
    cin >> n >> k;
    if (n == 1)
    {
        cout << n << endl;
    }
    else
    {
        while (m < n)
        {
            m = 2 * m + 1;
        }
        cout << m << endl;
    }
    return 0;
}