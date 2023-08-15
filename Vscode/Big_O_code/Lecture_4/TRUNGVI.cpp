#include<iostream>
#include<algorithm>
using namespace std;
void trungvi(int N, int arr[], int trungvi[])
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> a[i][j];
        }
        sort(arr, arr+N);
        trungvi[i] = arr[N/2 + 1];
    }
    sort(trungvi, trungvi+N);
    cout << trungvi[N/2 + 1] << endl;

}
int main()
{
    int N;
    int arr[1001];
    int trungvi[1001];
    trungvi(N, arr, trungvi);
}
