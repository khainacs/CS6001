#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int addition_digits(int n)
{
    int item, result = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while(j != 0)
        {
           item = j % 10;
           result += item;
           j = j / 10;
        }
    }
    return result;
}
bool check_prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = sqrt(n); i >= 2; i--)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int smaller_prime(int n)
{
    int result;
    for (int i = n; i >= 2; i--)
    {
        if (check_prime(i) == true)
        {
            result = i;
            break;
        }
    }
    return result;
}

int greater_prime(int n)
{
   int i = n + 1;
   while(check_prime(i) == false)
   {
       i += 1;
   }
   return i;
}

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    printf("The sum of digits in numbers from 1 to %d is %d\n", n, addition_digits(n));

    printf("The number smallest but bigger %d is %d\n", n, greater_prime(n));

    printf("The number biggest but smaller %d is %d\n", n, smaller_prime(n));
}
