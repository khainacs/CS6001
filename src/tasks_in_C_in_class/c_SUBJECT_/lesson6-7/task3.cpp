#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input_array(int a[], int  &n)
{
    printf("the number of element, required from 1 to 50:\n ");
    scanf("%d", &n);
    srand(time(NULL));
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
          	a[i] = a[i - 1] + rand() % 100;
        }
    }
}
void output_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
int main()
{
    int a[50];
    int n;
    intput_array(a, n);
    output_array(a, n);
}
