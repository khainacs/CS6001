// list divisor of ineger number n
#include<stdio.h>
void divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
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
       if (n < 1)
       {
           printf("n must bigger 0\n");
       }
    }while( n < 1);
    printf("List divisors of %d\n", n);
    divisor(n);
    printf("\n");
    
}