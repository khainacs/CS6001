//count prime number from 1 to n
// find perfect square numbers smallest but bigger n
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int index = sqrt(n); index >= 2; index--)
        {
            if (n % index == 0)
            {
                return false;
            }
        }
    }
    return true;
    
}
int count_prime_number (int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check_prime(i) == true)
        {
           count += 1;
        }
    }
    return count;
}
bool check_square_number(int x)
{
   int i = sqrt(x);
   if (pow (i, 2) == x)
   {
       return true;
   }
   return false;
}
int find_square_number_bigger_n(int n)
{
    int sq_root = sqrt(n);
    return (sq_root+1) * (sq_root + 1);
}
int main()
{
    int n;
    printf("enter n \n");
    scanf("%d", &n);
    printf("the number of prime number from 1 to %d is %d\n", n, count_prime_number(n));
    printf("The square number smallest but bigger %d is %d\n", n, find_square_number_bigger_n(n));
    

}