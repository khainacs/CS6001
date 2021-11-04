#include<stdio.h>
#include<cmath>

int  find_prime(int num)
{
    
    for (int i = sqrt(num); i >= 2; i-- )
    {

        if (num % i == 0)
        {
            return 0;
        }        
    }
    return 1;
}
    
void print_prime(int num)
{
    for(int i = 2; i <= num; i++)
    {
        if (find_prime(i) == 1)
        {
            printf("%d\t", i);
        }

    }
}
int count_number_prime(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i++)
        if (find_prime(i) == 1)
        {
            count += 1;
        }
    return count;
    
}

int sum_num_prime(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i++)
        if (find_prime(i) ==1)
        {
            sum += i;
        }
    return sum;
    
}
int sum_average_prime(int num)
{
    
    int sum_average = sum_num_prime(num) / count_number_prime(num);
    return sum_average;
}

void check_condition(int &num)
{
    do 
    {
        printf("enter number:");
        scanf("%d", &num);
        if ((num < 0 ) || (num > 100))
        {
            printf("error conditon");
        }
    }
    while((num < 0) || (num > 100));
    

}

int main()
{
    int num;
    check_condition(num);
    print_prime(num);        
    printf("\naverage the number of prime is %d\n", sum_average_prime(num));
    printf("count the number of prime is %d\n", count_number_prime(num));
    printf("sum the number of prime is %d\n", sum_num_prime(num));

}

    




