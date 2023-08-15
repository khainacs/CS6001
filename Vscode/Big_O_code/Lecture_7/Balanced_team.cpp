#include<iostream>
using namespace std;
int Balenced(long long number_student; long long arr[])
{
    cin >> number_student;
    long long ans = 0;
    for (int i = 0; i < number_student; i++)
    {
       cin >> arr[i];
    }
    long long j = 0;
    for (int i = 0; i < number_student; i++)
    {
       while( j < number_student & arr[i] + 5 >= arr[j])  
       {
           j++;
           ans = max(ans, j - 1);
       }  
    }
    return ans;
}
int main()
{
    long long number_student;
    int N = 1e9;
    long long arr[N];
    Balenced(number_student, arr);
}
