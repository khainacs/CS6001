//Calculate the sum S = x^n
#include<stdio.h>
int main()
{
    int n, x;
    int sum = 1;
    do 
    {
        printf("enter n\n");
        scanf("%d", &n);
        printf("enter x\n");
        scanf("%d", &x);
        if ( x == 0 && n == 0)
        {
            printf("x and n have not to be equal 0 at the same time\n ");
        }
    }while( x == 0 && n == 0);
    for (int i = 1; i <= n; i++)
    {
        sum = sum * x;
    }
    printf("The result of %d^%d = %d\n", x, n, sum);
}