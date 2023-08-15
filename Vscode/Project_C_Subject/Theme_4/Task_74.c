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
int check_pair(int a[], int size, int x) 
{
    int count = 0;
    for (int i = 0; i < (size - 1); i++) 
    {
        for (int j = (i + 1); j < size; j++) 
        {
            if (a[i] + a[j] == x) 
            {
               count += 1;
            }
        }
    }
    return count;
}
int main()
{
    int n, a[10], x;
    input_element(a, &n);
    printf("enter x\n");
    scanf("%d", &x);
    int size = sizeof(a) / sizeof(a[0]);
    printf("The number of pairs in array whose sum result x is %d\n ", check_pair(a, size, n));
   
    
}