#include<iostream>
#include<cmath>
using namespace std;
long long square(long ID, long K)
{
    long long result = 0;
    long long left = 2;
    long long right = 1e15;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long N = mid;
        long long count = 0;
        
        for (long long i = 1; i <= sqrt(N); i++)
        {
            count += int(sqrt(N - i*i));
        }
        if (count >= K)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << result << endl;
}
int main()
{
    long ID = 0;
    long K = 201720172017;
    square(ID, K);
}