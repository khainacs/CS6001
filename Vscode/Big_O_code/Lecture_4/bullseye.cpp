#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int T;
    long long r, t;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> r >> t;
        long long a = 2*r -1;
        double b,x;
        b = (double)a;
        x = (sqrt(b*b+8*(double)t)-b)/4.0;
        long long n = (long long)floor(x);
        while (t >= (2*(n+1)+a)*(n+1)) n++;
        while(t < (2*n+a)*n) n--;
        cout << "Case #" << i << ": " << n << endl;
    }
    
}