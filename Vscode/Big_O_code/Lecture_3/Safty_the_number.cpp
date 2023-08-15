/*
x is the sum of the judge-assigned point values of all contestants.
Y is a fraction of the audience's votes.
J is points from the judges
fomular point of contestant is J + X*Y.
*/
#include<iostream>
#include<iomanip>
using namespace std;
void safty_number(int test_case, int N, int s[])
{
    ///cin >> test_case;
    for(int index = 1; index <= test_case; index++)
    {
        /*
        cin >> N;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
            sum += s[i];
        }
        */
        int sum = 30;
        cout << "Case #" << index << ":" << endl;
        for (int contestant = 0; contestant < N; contestant++)
        {
            double low = 0;
            double high = 1;
            double res;
            for(int i = 0; i < 100; i++)
            {
                double mid = (low + high) / 2;
                double formular = s[contestant] + mid * sum;
                double remaining = 1 - mid;
                for (int j = 0; j < N; j++)
                {
                    if (j == contestant) continue;
                    double need = (formular - s[j]) / sum;
                    remaining -= max(0.0, need);
                }
                if (remaining > 0)
                {
                    low = mid;
                }
                else
                {
                   res = high = mid;
                }
            }
            cout << fixed << setprecision(5) << res * 100 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int test_case = 1;
    int N = 2;
    int s[1011] = {20, 10};
    safty_number(test_case, N, s);
}