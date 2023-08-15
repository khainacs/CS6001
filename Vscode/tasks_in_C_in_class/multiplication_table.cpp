#include<stdio.h>
int main()
{
    int i,j;
    printf("enter which multiplication you want\n");
    scanf("%i", &i);
    for (j = 0; j<=10; j++)
    {
        printf("\n%d x %d = %d",i, j, i*j);
        
    }
    printf("\n");
}