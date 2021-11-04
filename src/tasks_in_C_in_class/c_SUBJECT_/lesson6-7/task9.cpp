#include<stdio.h>
#include<math.h>
void input_element(int arr[], int &n)
{
    printf("enter size of array\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
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
void count_prime(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ( check_prime(arr[i]) == 1)
        {
           count += 1;
        }
    }
    printf("the prime number in array is %d\n", count);
}
int main()
{
    int arr[50];
    int n;
    input_element(arr, n);
    count_prime(arr, n);
}