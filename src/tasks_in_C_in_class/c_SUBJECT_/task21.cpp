#include<stdio.h>
#include<math.h>
bool find_number_prime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    else 
    {
        for (int i = sqrt(number); i >= 2; i--)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void listed_number(int number)
{
    printf("the number of prime number least less %d\n", number);
    for (int j = 2; j < number; j++)
    {
        if (find_number_prime(j) == true)
        {
            printf("%d\t", j);
        }
    }
    printf("\n");
}

int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d", &number);
    if (find_number_prime(number) == true)
    {
        printf("this is a prime number\n");
    }
    else 
    {
        printf("this is not a prime number\n");
    }
    listed_number(number);
}