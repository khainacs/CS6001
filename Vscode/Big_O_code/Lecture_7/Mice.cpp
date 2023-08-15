#include<iostream>
#include<vector>
using namespace std;
int arr_mouse[10005];
int arr_cheese[10005];
int eated[10005];
int Mice(int mouses, int cheese, int y0, int y1)
{
    cin >> mouses >> cheese >> y0 >> y1;
  
    for (int i = 0; i < mouses; i++)
    {
        cin >> arr_mouse[i];
    }
    for (int i = 0; i < cheese; i++)
    {
        cin >> arr_cheese[i];
        eated[i] = -1;
    }
    int j = 0;
    int count = mouses;
    for (int i = 0; i < mouses; i++)
    {
        while (j < cheese - 1 && arr_mouse[i] > arr_cheese[j])
        {
            j++;
        }
        if (j < mouses - 1 && abs(arr_cheese[j] - arr_mouse[i]) == abs(arr_cheese[j+1] - arr_mouse[i]) )
        {
            if (eated[j] == abs(arr_cheese[j] - arr_mouse[i]) )
            {
                count--;
            }
            else if ( eated[j] == -1)
            {
                eated[j] = abs( arr_cheese[j] - arr_mouse[i]);
                count--;
            }
            else if ( eated[j+1] == -1)
            {
                eated[j+1] = abs( arr_cheese[j+1] - arr_mouse[i] );
                count--;
            }
        }
        else
        {
            if ( eated[j] == abs( arr_cheese[j] - arr_mouse[i]))
            {
                count--;
            }
            else if (eated[j] > abs( arr_cheese[j] - arr_mouse[i]))
            {
                eated[j] = abs(arr_cheese[j] - arr_mouse[i]);
            }
            else if (eated[j] == -1)
            {
                 eated[j] = abs(arr_cheese[j] - arr_mouse[i]);
                 count--;
            }
        }   
    }
    return count;
}
int main()
{
    int mouses;
    int cheese;
    int y0, y1;
    cout << Mice(mouses, cheese, y0, y1) << endl;
}