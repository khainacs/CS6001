#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int x, int y)
{
    return x < y;
}
void multi_max(int N, int arr[])
{
    //cin >> N;
    
        /*
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }        
        */

        sort(arr, arr+N, compare);
        
        int result = max(arr[N-1]*arr[N-2]*arr[N-3], arr[0]*arr[1]*arr[N-1]);
        cout << result << endl;
    
    
    
    


}
int main()
{
    int N = 4;
    int arr[N] = {-20, -16, 18, 6};
    /*
    int right ;
    int left;
    quick_sort(arr, 0, N);
    */
    multi_max(N, arr);
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    
   
}