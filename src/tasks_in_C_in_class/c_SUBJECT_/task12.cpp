#include<stdio.h>
int main()
{
    int number, i;
    printf("enter a number\n");
    scanf("%d", &number);
    printf("the number of odd digits in this number is:\n");
    while (number != 0)
    {
        i = number % 10;
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
        number = number / 10;
    }
    printf("\n");
}