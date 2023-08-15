#include<stdio.h>
void listed_number(int number)
{
    int i;
    while (number != 0)
    {
        i = number % 10;
        printf("%d\n", i);
        number = number / 10;
    }
}


int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d", &number);
    listed_number(number);

}