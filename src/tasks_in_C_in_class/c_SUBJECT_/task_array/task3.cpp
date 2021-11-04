#include<stdio.h>
#define MAX 100
void input_elements(float a[], float &n)
{
    do 
    {
        printf("enter number of elements from 0 to 100:\n ");
        scanf("%f", &n);
    }while(n <= 0 || n > 100);

    for(int i = 0; i < n; i++)
    {
        printf("enter a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void output_array(float a[], float n)
{
    printf("array include elements is :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%f\t", a[i]);
    }
    printf("\n");
}
int main()
{
    float a[MAX];
    float  n;
    input_elements(a, n);
    output_array(a, n);

