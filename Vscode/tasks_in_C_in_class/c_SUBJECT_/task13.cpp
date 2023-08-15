#include<stdio.h>
int main()
{
    int i, number;
    printf("enter the number\n");
    scanf("%d", &number);
    long result = 0,  value = 1;
    for(int i = 1; i <= number; i++)
    {
        value = value * i;
        result = result + value;
    }
    printf("result of this expression is %ld\n", result);
}