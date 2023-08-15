#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int x, int y)
{
    return x < y;
}
bool check(long long X, long long N, long long weight[])
{
    long long Y = N - X;   
    for (int i = 0; i < Y; i++)
    {
       if (2*weight[i] > weight[N - Y + i])
       {
           return false;
       }
    }
    return true;
}
void Cake(long long N, long long weight[])
{
    /*
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i];
    }
    */
    sort(weight, weight+N, compare);
    long long left = N/2;
    long long right = N;
    int answer = 0;
    while (left < right)
    {
        long long mid = left + (right - left) / 2;
        answer = mid;
       
        if (check(mid, N, weight) == false)
        {
            left = mid + 1;
            
        }
        else
        {
            right = mid;
            
        }
    }
    cout << left << endl;
}

int main()
{
    long long N = 4;
    long long weight[1000000] = {1, 2, 4, 8};
    Cake(N, weight);
}