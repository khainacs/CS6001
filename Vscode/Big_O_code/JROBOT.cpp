#include<iostream>
#include<algorithm>
using namespace std;
void JROBOT(int N, int M, int arr[])
{
    
    cin >> N;
    cin >> M;
    for (int i = 0; i < N*M ; i++)
    {
        cin >> arr[i];
    }
    
    int j, i;
    cin >> i >> j;

    int start = arr[(i-1)*M + (j-1)];
    sort(arr, arr+ N*M );
    
    int counter = 0;
    for (int i = 0; i < N*M; i++)
    {
        if(arr[i] > start && (arr[i] > arr[i-1]))
        {
           
            counter += 1;
        }
    }
    cout << counter << endl;

}
int main()
{
    int arr[10000] = {2, 4, 6, 8, 5, 7, 13, 4, 6, 8, 9, 10};
    int N = 3;
    int M = 4;
    JROBOT(N, M, arr);
}