// Calculate the sum = 1/2 + 1/4 ....+ 1/2n.
#include<stdio.h>
int main()
{
    int n;
    float sum = 0;
    do
    {
       printf("enter n\n");
       scanf("%d", &n);
       if (n < 1)
       {
           printf("n have to bigger or equal 1");
       }
    }while(n < 1);
    
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / (2 * i));
    }
    printf("The sum of S(n) = 1/2 + 1/4 +.....+ 1/n = %f\n", sum);

}