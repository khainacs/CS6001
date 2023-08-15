#include<stdio.h>
void input_element(int a[], int *n)
{
    do
    {
        printf("enter the number of elements\n");
        scanf("%d", n);
        if (*n < 0 || *n > 10)
        {
            printf("the number of elements must be from 1 to 10\n");
        }
    }while (*n < 0 || *n > 10);
    for (int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
int addition_digits(int a[], int n)
{
    int result = 0, item;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 10)
        {
            result += a[i];
        }
        else if (a[i] >= 10)
        {
            while(a[i] != 0)
            {
                item = a[i] % 10;
                result += item;
                a[i] = a[i] / 10;
            }
        }
        
    }
    return result;
}
int main()
{
    int a[10];
    int n;
    input_element(a, &n);
    printf("the sum of digits in array is %d\n", addition_digits(a, n));
}