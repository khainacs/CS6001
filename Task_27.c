// mulitple total of odd divisors of integer number n
#include<stdio.h>
int odd_divisor(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        if ((n % i == 0) && (i % 2 != 0))
        {
           result *= i;
        }
    }
    return result;
    
}
int main()
{
    int n;
    do
    {
      printf("enter n\n");
      scanf("%d", &n);
      if ( n < 1)
      {
        printf("n must bigger \n");
      }
    }while( n < 1);
    printf("mulitple total of odd divisors of integer number %d = %d\n", n, odd_divisor(n));
   

}