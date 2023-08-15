#include<stdio.h>
int main()
{
    int num;
    int i = 1;
    int flag = 0;
    int sum_divisor = 0;
    printf("enter num:\n");
    scanf("%d", &num);
    do
    {
        printf("enter num:\n");
        scanf("%d", &num);
        if ((num < 0) && (num > 100))
        {
             printf("enter again num\n");
        }
    }while ((num < 0) && (num > 100));
    
    while (i <= num)
    {
            if ( num % i == 0)
            {
                 i += 1;
                flag += 1;
                
            }
            else
            {
                i += 1;
            }
    }
    
    while (i < num)
        {
            if ( num % i == 0)
            {
                sum_divisor += i; 
                i += 1;
                
            }
            else
            {
                i += 1;

        
            }
        }
    printf("%d\n", sum_divisor);
    if ( flag == 2)
    {
        printf("this is prime number\n");
    }
    else 
    {
        printf("this is not not prime number\n ");
    }
    if (sum_divisor == 0)
    {
        printf("this number is a perfect number\n");
    }
    else
    {
        printf("this number is not a perfect number\n");
    }
     
}