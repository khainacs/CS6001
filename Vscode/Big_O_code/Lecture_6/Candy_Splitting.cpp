#include<iostream>
using namespace std;
void splititng_candy(int test_case, int N, long long arr[])
{
    cin >> test_case;
    for (int index = 1; index <= test_case; index++)
    {
        cin >> N;
        int total = 0, sum = 0;
        int min = 10000001;
        for (int i = 0; i < N; i++)
        {
            cin >>  arr[i];
            total ^= arr[i];
            cout << total << endl;
            sum += arr[i];
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout << "Case #" << index << ": ";
        if (total != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << sum - min << endl;
        }
        
    }
}
int main ()
{
    int test_case;
    int N;
    long long arr[1000];
    splititng_candy(test_case, N, arr);
}
