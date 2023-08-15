#include<iostream>
#include<algorithm>
using namespace std;
int test_case;
long R;
long B;
long C;
long long M_i[1001];
long long S_i[1001];
long long P_i[1001];
long long bits[10005];
bool check_time(long long time)
{
    for (long i = 1; i <= C; i++)
    {
        bits[i] = min((time - P_i[i]) / S_i[i], M_i[i]);
    }
    sort(bits+1, bits+C+1);
    long long count = 0;
    for(long i = C; i >= C - R + 1; i--)
    {
        count += bits[i];
        if (count >= B)
        {
            return true;
        }
    }
    return false;
}
void Bit_party(int test_case, long R, long B, long C)
{
    cin >> test_case;
    long long max_time = 0;
    for (int index = 1; index <= test_case; index++)
    {
        cin >> R >> B >> C;
        for (int i = 1; i <= C; i++)
        {
            cin >> M_i[i] >> S_i[i] >> P_i[i];
            max_time = max(max_time, (S_i[i]*M_i[i]+P_i[i]));
        }
        cout << "Case #" << index << ": ";
        long long left = 0;
        long long right = max_time;
        long long answer = 0;
        while (left < right)
        {
            long long mid = (left + right) / 2;
            if (check_time(mid))
            {
                answer = mid;
                right = mid;
            }
            else
            {
            
                left = mid + 1;
            }
        }
        cout << answer << endl;
    }
   
}
int main()
{
  
    Bit_party(test_case, R, B, C);
}