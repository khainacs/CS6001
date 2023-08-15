#include<iostream>
#include<algorithm>
using namespace std;
int SEGPAR(int arr[], int K, int N)
{
    ///cin >> N >> K;
    int left = 0, right = 0;
    for(int i = 0; i < N; i++)
    {
        ///cin >> arr[i];
        right += max(right, arr[i]);
        left = min(left, arr[i]);
    }
    cout << "outside loop" << "left:" << left << " " << "right" << right << endl;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        cout << "mid" << mid << endl;
        int line = 1;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
            if (sum > mid)
            {
                line += 1;
                sum = arr[i];

            }
        }
        if (line > K)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        
    }
    return left;
    ///cout << left << endl;
    
}
int main()
{
    int arr[1500] = {1,1,1,3,2,2,1,3,1};
    int N = 9;
    int K = 4;
    cout << SEGPAR(arr, K, N) << endl; 
}