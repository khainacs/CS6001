#include<stdio.h>
int main()
{
    unsigned int number;
    printf("ennter unsigned number:\n");
    scanf("%u", &number);
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count += i;
        }
    }
    
    printf("total number of common divisors: %d\n", count);
}