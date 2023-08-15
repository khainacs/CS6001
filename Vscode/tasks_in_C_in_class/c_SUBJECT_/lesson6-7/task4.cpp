#include<stdio.h>
void input_array(int arr[], int &n)
{
    printf("enter the number of element\t");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void output_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int arr[50];
    int n;
    input_array(arr, n);
    printf("the number of element is odd number:\n");
    output_array(arr, n);
}