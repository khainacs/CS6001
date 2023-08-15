#include<iostream>
using namespace std;
int main()
{
    int M[403][403], n, x, y, z, KQ = 0;
    cin >> n;
    for(int i = 0; i <= 400; i++)
    {
        for (int j = 0; j <= 400; j++)
        {
            M[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        M[x+200][y+200] =z;
    }
    for (int i = 0; i <= 400; i++)
    {
        for (int j = i + 1; j <= 400; j++)
        {
            int a = 0; int b = 0;
            for (int k = 0; k <= 400; k++)
            {
               if ((M[i][k] == 1 && M[j][k] == 4) || (M[i][k] == 4 && M[j][k] == 1))
               {
                   a++;
               }
               if ((M[i][k] == 2 && M[j][k] == 3) || (M[i][k] == 3 && M[j][k] == 2))
               {
                   b++;
               }
            }
            KQ += a*b;
            a = 0; b = 0;
            for (int k = 0; k <= 400; k++)
            {
                if ((M[i][k] == 1 && M[j][k] == 3) || (M[i][k] == 3 && M[j][k] == 1))
                {
                      a++;
                }
                if ((M[i][k] == 2 && M[j][k] == 4) || (M[i][k] == 4 && M[j][k] == 2))
                {
                    b++;
                }
            }
            KQ += a*b;
            a = 0; b = 0;
            for (int k = 0; k <= 400; k++)
            {
                if ((M[i][k] == 1 && M[j][k] == 2) || (M[i][k] == 2 && M[j][k] == 1))
                {
                    a++;
                }
                if ((M[i][k] == 4 && M[j][k] == 3) || (M[i][k] == 3 && M[j][k] == 4))
                {
                    b++;
                }
            }
            KQ += a*b;
        }
    }
    cout << KQ << endl;
}