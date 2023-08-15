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
int find_max_element(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void sort_ascending(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1 ; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
               int temp = a[j];
               a[j] = a[j - 1];
               a[j - 1] = temp;
            }
        }
    }
}
void output_element(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
int main()
{
    int a[10];
    int n;
    input_element(a, &n);
    printf("The higest value in array is %d\n", find_max_element(a, n));
    printf("The array is sorted with ordering ascending\n");
    sort_ascending(a, n);
    output_element(a, n);
    printf("\n");

    
}
