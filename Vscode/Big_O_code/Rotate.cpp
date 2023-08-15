#include<iostream>
#include<string>


using namespace std;
void rotate(int test_case, int N, int K, string matrix[])
{
    cin >> test_case;
    string answer;
    bool red_win = false;
    bool blue_win = false;
    for(int index = 1; index <= test_case; index++)
    {
        cin >> N;
        cin.clear();
        fflush(stdin);
        cin >> K;
        red_win = false;
        blue_win = false;
        for(int i = 0; i < N; i++)
        {
            cin >> matrix[i];
        }
        for (int i = 0; i < N; i++)
        {
           for (int index = 0; index < N - 1; step++)
           {
               for (int j = 0; j <  N -1; j++)
               {   
                  if (matrix[i][j] != '.' && matrix[i][j+1] == '.')
                  {
                    swap(matrix[i][j], matrix[i][j+1]);
                  }
               }
           }
        } 
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                
                int m = 1;
                while (j + m < N && matrix[i][j+m] == matrix[i][j])
                {
                    if (++m == K)
                    {
                        switch(matrix[i][j])
                        {
                            case 'R':
                                  red_win = true;
                                  break;
                            case 'B':
                                  blue_win = true;
                                  break;
                        }
                    }
                }
                m = 1;
                while (i + m < N && matrix[i+m][j] == matrix[i][j])
                {
                    if (++m == K)
                    {
                        switch (matrix[i][j])
                        {
                            case 'R':
                                 red_win = true;
                                 break;
                            case 'B':
                                  blue_win = true;
                                  break;
                        }
                    }
                }
                m = 1;
                while (i+m < N && j + m < N  && matrix[i+m][j+m] == matrix[i][j])
                {
                    if (++m == K)
                    {
                        switch(matrix[i][j])
                        {
                            case 'R':
                                 red_win = true;
                                 break;
                            case 'B':
                                 blue_win = true;
                                 break;
                        }
                    }
                }
                m = 1;
                while(i - m >= 0 && j+m < N && matrix[i-m][j+m] == matrix[i][j])
                {
                    if (++m == K)
                    {
                        switch(matrix[i][j])
                        {
                            case 'R':
                                red_win = true;
                                break;
                            case 'B':
                                blue_win = true;
                                break;
                        }
                    }
                }
            }
        }
        if (blue_win == true && red_win == true)
        {
              answer = "Both";
        }
        else if (blue_win == true)
        {
             answer = "Blue";
        }
        else if (red_win == true)
        {
            answer = "Red";
        }
        else
        {
            answer = "Neither";
        }
        cout << "case #" << index << ":" << " " << answer << "\n";

        
       
    }     
}

int main()
{
    int test_case;
    string matrix[51];
    int K;
    int N;
    rotate(test_case, N, K, matrix);
}