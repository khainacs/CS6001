#include<stdio.h>
int main()
{
    int number, count = 0 , i;
    printf("enter a number \n");
    scanf("%d", &number);
    while(number != 0)
    {
        i = number % 10;
        count += i;
        number = number / 10;
       
    }
    printf("total of digits is %d\n", count);
}