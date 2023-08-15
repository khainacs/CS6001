///https://bigocoder.com/courses/51/lectures/695/problems/1127?view=statement
#include<iostream>
using namespace std;
long long Find_value(long ID, long K)
{
    ///cin >> ID;
    ///cin >> K;
    long long left = 0;
    long long right = 1e18;
    while (left < right)
    {
        long long mid = left + (right - left) / 2;
        long long N = mid;
        long long count = N / 3 + N / 5 + N / 7 - N / 15 - N / 21 - N / 35 + N / 105;
        if (count == K && (N % 3 == 0 || N % 5 == 0 || N % 7 == 0))
        {   
            cout << N << endl;
            break;
        }
        if (count < K)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
}
int main()
{
    long ID = 1;
    long K = 4;
    Find_value(ID, K);
}