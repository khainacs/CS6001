// Calculate the sum S = 1/2 + 3/4 + 5/6 +..........+ (2*n +1) / (2*n + 2)
#include<stdio.h>
int main()
{
    int n;
    float sum = 0;
    do 
    {
        printf("enter n \n");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("n have to be bigger or equal 0\n");
        }
    }while (n < 0);
    for (int i = 0; i <= n; i++)
    {
        sum += (2*i + 1.0) / (2*i + 2.0);
    }
    printf("The sum S = 1/2 + 3/4 + 5/6 +......+ (2*n + 1)/(2*n + 2) = %f\n", sum);

}