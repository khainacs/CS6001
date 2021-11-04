#include<stdio.h>
void print_multiple(int a[], int n)
{
    printf("elements multiple of 5 is ");
    int i; 
    for (i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            printf("a[%d] = %d\n, i, a[i]")
        }
    }
}
int check_number(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i<=n/2;i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void printf_prime(int a[], int n)
{
    printf("element is prime number in array is:\n")
    for (int i = 0; i < n; i++)
    {
        if (check_prime(a[i]))
        {
            printf("%d", a[i]);
        }
    }
}
void listed_odd_number(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%4d", a[i]);
        }
    }
}
int main()
{
    
}