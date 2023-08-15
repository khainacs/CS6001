#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int test_case;
   cin >> test_case;
   for (int index = 0; index < test_case; index++)
   {
        int houses, days;
        int s, k, p;
        cin >> houses >> days;
        long long cnt[days+10][houses+10] = {0};
        long long  answer[houses+10] = {0};
        for (int i = 1; i <= days; i++)
        {
            cin >> s >> k >> p;
            cnt[s][k]++;
            if (s + p *k <= houses)
            {
                cnt[s+p*k][k]--;
            }
        }
        for(k = 1; k <= 10; k++)
        {
            for (int j = k; j <= houses; j++)
            {
                cnt[j][k] += cnt[j-k][k];
            }
        }
        int position = 0;
        for (int i = 1 ; i <= houses; i++)
            {
            for (k = 1; k <= 10; k++)
            {
                answer[i] += cnt[i][k];
            }
            position++;
        }
        for (int i = 0; i < houses; i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
        /*
        int joke = 1;
        int faker = 1;
        for (int i = 1; i <= houses; i++)
        {
        
            if (faker < answer[i])
            {
                faker = answer[i];
                joke = i;
            }
        }
        cout <<"House " << joke << " should get the biggest and best gift next Christmas." << endl;
        */
    } 
  
}