// list total odd divisors of integer number n
#include<stdio.h>
void odd_divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if ((n % i == 0) && (i % 2 != 0))
        {
           printf("%d\t", i);
        }
    }
    
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
    printf("list total odd divisors of integer number %d\n", n);
    odd_divisor(n);
    printf("\n");

}