#include<stdio.h>
#include<math.h>
void input_array(int arr[], int &n, int &x)
{
    printf("enter the number of element\t");
    scanf("%d", &n);
    printf("enter x\t");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void output_bigger_x(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x )
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}
void output_multiple_5(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}
int check_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = sqrt(n); i >= 2; i--)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void output_array_prime(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ( check_prime(arr[i]) == 1)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}
void output_place_odd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int arr[50];
    int n, x;
    input_array(arr, n, x);
    printf("the number of element is bigger x:\n");
    output_bigger_x(arr, n, x);
    printf("the number of elemet is multiple of 5\n");
    output_multiple_5(arr, n);
    printf("the number of element is prime number\n");
    output_array_prime(arr, n);
    printf("the number of element in odd place\n");
    output_place_odd(arr, n);
}