#include<stdio.h>
int main()
{
    unsigned int n, k, i, j;
    printf("enter asterisks that you want:\n");
    scanf("%u", &k);
    n = 10;
    for (int i = 0;i<n;i++)
    {
        for(int j = 0;j<k;j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    

    unsigned int asterisk = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= asterisk; j++)
        {
            printf("*");
        }
        printf("\n");
        asterisk += 1;
    }
}