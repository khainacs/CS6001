#include<iostream>
using namespace std;
int main()
{
    int N = 3e5 + 1;
    int N_2 = 2e6 +2; 
    int arr[N];
    int count[2][N_2];
    int answer = 0;
    int n;
    int prefix[N];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    prefix[0] = 1;
    count[0][0] = 1;
    for (int r = 1; r <= n; i++)
    {
        prefix[r] = prefix[r-1] ^ arr[r];
        answer += count[r % 2][prefix[r]];
        count[r%2][prefix[r]]; 
    }
    count << answer << endl;
    return 0;

}