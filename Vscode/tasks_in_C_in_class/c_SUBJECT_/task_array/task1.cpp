#include<stdio.h>
#define MAX 100
void input_elements(int a[], int &n)
{
    do 
    {
        printf("enter number of elements from 0 to 100:\n ");
        scanf("%d", &n);
    }while(n <= 0 || n > 10);

    for(int i = 0; i < n; i++)
    {
        printf("enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void output_array(int a[], int n)
{
    printf("array include elements is :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[MAX];
    int  n;
    input_elements(a, n);
    output_array(a, n);

}