#include<iostream>
using namespace std;
void input_and_couting(int N, long long d[])
{
    cin >> N;
    int i;
    int A = i;
    int B = i + 1;
    for (i = 1; i <= N; i++)
    {
        cin >> d[A] >> d[B];
        if (d[A] > d[B])
        {
            int tmp = i;
            A = B;
            B = tmp;
            for (int j = A; j <= B - 1; j++)
            {
                d[j] += 1;
            }
        }
    }
}
void solve(long long* d)
{
    int max_value = 0;
    for (int i = 0; i <= 1000; i++)
    {
        if (d[i] > max_value)
        {
            max_value = d[i];
        }
    }
    int result = 0;
    for (int i = 0; i <= 1000; i++)
    {
        if (d[i] == max_value)
        {
            result += 1;
        }
    }
    cout << result << endl;
}
int main()
{
    int N;
    long long d[1005];
    input_and_couting(N, d);
    solve(d);
}