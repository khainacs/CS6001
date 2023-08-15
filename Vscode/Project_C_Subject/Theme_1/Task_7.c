// Calculate the sum S = 1/(1*2) + 1/(2*3) +........+ 1 / (n * (n + 1))
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
            printf("n have to be bigger or equal 1\n");
        }
    }while(n < 1);
    for(int i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * (i + 1));
    }
    printf("The sum S = 1/(1*2) + 1/(2*3) +.......+ 1/(n*(n+1)) = %f\n ", sum);
}