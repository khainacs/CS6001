#include<iostream>
#include<algorithm>
using namespace std;
void Trouble_sort(long long arr[], int test_case, int N)
{
    ///cin >> test_case;
    for (int index = 1; index <= test_case; index++)
    {
        /*
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        */
        long long odd[5000];
        long long even[5000];
        int index_odd = 0;
        int index_even = 0;
        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                
                even[index_even] = arr[i];
                index_even++;
            }
            else
            {
                odd[index_odd] = arr[i];
                index_odd++;
            }
        }
        sort(even, even + index_even);
        sort(odd, odd + index_odd);    
        long long merge[10000];
        index_even = 0;
        index_odd = 0;
        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                merge[i] = even[index_even];
                index_even++;
            }
            else
            {
                merge[i] = odd[index_odd];
                index_odd++;
            }
        }
        for (int index = 0; index < N; index++)
        {
            cout << merge[index];
        }  
        cout<< endl;
        cout << "Case #" << index << ":" << endl;
        bool flag = true;
        for (int index = 0; index < N-1; index++)
        {
            if (merge[index] > merge[index+1])
            {
                ///cout<< merge[index] << " " << merge[index+1] << endl;
                cout << index << endl;
                flag = false;
                break;
            }
        }
       
        if (flag == true)
        {
            cout << "OK" << endl;
        }
        

    }
}
int main()
{
    long long arr[10] = {8, 9, 7};
    int test_case = 1;
    int N = 3;
    Trouble_sort(arr, test_case, N);
}