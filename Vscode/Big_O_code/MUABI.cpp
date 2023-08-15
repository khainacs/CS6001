#include<iostream>
#include<algorithm>
using namespace std;
void quick_sort(int a[], int b[], int left, int right)
{
    if (left >= right) return;
    int i = left;
    int j = right;
    int pivot = b[(left + right) / 2];
    while(i < j)
    {
        while (b[i] > pivot) i++;
        while (b[j] < pivot) j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            swap(b[i], b[j]);
            i++;
            j--;
        }
    }
    quick_sort(a, b, left, j);
    quick_sort(a, b, i, right);

}
void MUABI(int N, int M, int a[], int b[])
{
    cin >> N;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> a[i] >> b[i];
    }
    quick_sort(a, b, 0, M-1);
    int result = 0;
    int counter = 0;
    for(int index = 0; index < M; index++)
    {
        for (int index_k = 0; index_k < a[index]; index_k++)
        {
            if (counter++ < N)
            {
                result += b[index];
            }
        }
    }
    cout << result << endl;
}
int main()
{
    int N;
    int M;
    int a[10000];
    int b[10000];
    MUABI(N, M, a, b);
    
}