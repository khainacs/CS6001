
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row, column;
    int matrix[501][501];
    int current = 0;
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
            current ^= matrix[i][0];
        }
    }
    vector <int> answer(row, 1);
    if (current == 0)
    {
        for (int i = 0; i < row & current == 0; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (matrix[i][j] != matrix[i][0])
                {
                    answer[i] = j + 1;
                    current ^= matrix[i][0];
                    current ^= matrix[i][j];
                    break;
                }
            }
        }
    }
    if (current == 0)
    {
        cout << "NIE" << endl;
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            cout << " " << answer[i];
        }
    }
    cout << endl;
    return 0;
}
