#include<iostream>
#include<algorithm>
using namespace std;
long long answer = 0;
long long i = 0, j = 0;
long long arr_B[300005];
long long arr_A[300005];
int array_equal(long long length_A, long long length_B)
{
    cin >> length_A;
    for (long long  i = 0; i < length_A; i++)
    {
        cin >> arr_A[i];
    }
    cin >> length_B;
    for (long long i = 0; i < length_B; i++)
    {
        cin >> arr_B[i];
    }
    
    long long unsigned left = arr_A[0];
    long long unsigned right = arr_B[0];
    while(i < length_A && j < length_B)
    {
         if (left == right)
         {
            ++answer;
            left = arr_A[++i];
            right = arr_B[++j];
            continue;
         }
         if (left < right)
         {
           left += arr_A[++i];
         }
         else
         {
           right += arr_B[++j];
         }
         
    }
    if (i != length_A || j != length_B)
    {
        return -1;
    }
    return answer;
}   
int main()
{
   long long length_A;
   long long length_B;
   cout << array_equal(length_A, length_B) << endl;

}