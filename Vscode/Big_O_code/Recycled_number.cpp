/*
Let's say a pair of distinct positive integers (n, m) is recycled
if you can obtain m by moving some digits from the back of n to the front 
without changing their order. 
For example, (12345, 34512) is a recycled pair
since you can obtain 34512 by moving 345 from the end of 12345 to the front.
Note that n and m must have the same number of digits in order to be a recycled pair.
Neither nn nor m can have leading zeros.

Given integers A and B with the same number of digits and no leading zeros
how many distinct recycled pairs (n, m) are there with A <= n < m <= B.
*/
#include<iostream>
using namespace std;
int recyled_number(int A, int B)
{
    int unit = 1;
    int temp = A;
    int result = 0;
    while(temp >= 10)
    {
        unit *= 10;
        temp /= 10;
    }
    for (int n = A; n <= B; n++)
    {
        temp = n;
        while(true)
        {
            temp = (temp / 10) + ((temp % 10) * unit);
            if (temp == n)
            {
                break;
            }
            else if (temp > n && temp <= B)
            {
                result++;
            }
        }
    }
    return result;
    

}
int main()
{
    int test_case;
    int A, B;
    cin >> test_case;
    for (int index = 1; index <= test_case; index++)
    {
        cin>> A;
        cin>> B;
        int answer = recyled_number(A, B);
        cout<< "case #" << index << ":"<< " " << answer << "\n";
    }
    
    
    return 0;
}