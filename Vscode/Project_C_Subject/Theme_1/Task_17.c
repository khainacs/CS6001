//calcualte the sum S = x + x^2/(1+2) + x^3/(1+2+3)+....+ x^n/(1+2+3...+n)
#include<stdio.h>
int main()
{
    int n, x;
    float sum = 0, numerator = 1, denominator = 0;
    do 
    {
        printf("enter x\n");
        scanf("%d", &x);
        printf("enter n\n");
        scanf("%d", &n);
        if (x == 0 && n == 0)
        {
            printf("x and n must not be equal 0 at the same time");
        }
    }while(n == 0 && x == 0);
    for (int i = 1; i <= n; i++)
    {
       numerator = x * numerator;
       denominator += i;
       sum += numerator / denominator;
    }
    printf("the sum S = x + x^2/(1+2) + x^3/(1+2+3) + x^n/(1+2+3+....+n) = %f\n", sum);

}