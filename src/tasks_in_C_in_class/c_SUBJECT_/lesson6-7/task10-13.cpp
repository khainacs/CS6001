#include<stdio.h>
void input_element(int a[], int &n)
{
    printf("the number of elements in array\n");
    scanf("%d", &n);
    for(int i =0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void count_smaller_x(int a[], int n, int &x)
{
    printf("enter x:\n");
    scanf("%d", &x);
    printf("elements smaller X\n");
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            printf("%d\t", a[i]);
            count += 1;
        }
    }
    printf("\n");
    printf("the number of element smaller X is %d\n", count);
}
void find_largest_element(int a[], int n)
{
    int max = a[0];
    int position = -1; 
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            position = i;
        }
    }
    printf("position of the largest element is %d\n", position);
}
void find_smallest_positive_element(int a[], int n)
{
    int min = 0;
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            min = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min && a[i] > 0)
        {
            min = a[i];
            position = i;
        }
    }
    printf("position of the smalles positive element %d\n", position);
}
void find_largest_negative_element(int a[], int n)
{
    int max = 0;
    int position = -1;
    for (int i =  0; i < n; i++)
    {
        if (a[i] < 0)
        {
            max = a[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && a[i] > max)
        {
            max = a[i];
            position = i;
        }
    }
    printf("position of the largest negative element %d\n", position);
}
int main()
{
    int a[50];
    int n,x;
    input_element(a, n);
    count_smaller_x(a, n, x);
    find_largest_element(a, n);
    find_smallest_positive_element(a, n);
    find_largest_negative_element(a, n);
}