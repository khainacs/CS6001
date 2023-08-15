#include<stdio.h>
#include<cmath>
#include <stdbool.h>

void count_divisor(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count += 1;
        }
    }
    printf("the number of divisor is %d\n", count);
}

int  check_prime(int number)
{
    
    if (number <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(number); i++ )
    {

        
        if (number % i == 0)
        {
            return 0;
        }        
    }
    return 1;
    
    
}

void  count_digits_prime_in_number(int number)
{
    int  count = 0;
    
    while (number != 0)
    {
        int j = number % 10;
        if (check_prime( j) == 1)
        {
            count +=1;
            
            
        }
        number /= 10;
    }
    printf("%d\n", count);  
    
}

int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d", &number);

    count_divisor(number);

    if (check_prime(number) == true)
    {
        printf("this number is prime number\n"); 
    }
    else
    {
        printf("this number is not prime number\n");
    }

    count_digits_prime_in_number(number);

}