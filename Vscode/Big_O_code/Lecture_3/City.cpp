#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int x, int y)
{
    return x < y;
}
void city(int row, int column, int K)
{
    cin >> row;
    cin >> column;
    cin >> K;
    long long arr[row][column];
    long long house[2000];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < K; i++)
    {
        cin >> house[i];
    }
    long long sum[500*500];
    int index = 0;
    pair <int, int> dir[] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,0}, {1,1}, {1, -1}};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int total = 0;
            for (int k = 0; k < 8; k++)
            {
                int x = i + dir[k].first;
                int y = j + dir[k].second;
                if (x >= 0 && x < row  && y >= 0 && y < column)
                {
                    total += arr[x][y];
                }
            }
            sum[index] = total;
            index += 1;
        }
    }
    sort(sum, sum+index);
    for (int i = 0; i < K; i++)
    {
        int left = 0;
        int right = index;
        bool flag = false;
        while (left < right)
        {
            int mid = (left + right) / 2;
            int target = house[i];
            if (target == sum[mid])
            {
                flag = true;
                break;
            }
           else if (sum[mid] < target)
           {
              left = mid + 1;
           }
           else 
            {
              right = mid;
            }

        }
        if (flag == true)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    
}
int main()
{
    int row;
    int column;
    int K;
    city(row, column, K);
}