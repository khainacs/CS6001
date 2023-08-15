#include<stdio.h>
void input(int arr[105][105], int *n)
{
    printf("enter the size from 2 to 100:");
    do 
    {
        scanf("%d", n);
        if (n < 2 || n > 100)
        {
            printf("enter again\n");
        }
    }while (n < 2 || n > 100);

}
void element_4_bordor(int arr[105][105], int n)
{
    printf("the element on the most above line: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[0][i]);
    }
    printf("\n");
    printf("the element on the most right line: ");
    for (int i = 0; i  < n; i++)
    {
        printf("%d", arr[n][i]);
    }
    printf("\n");
    printf("the element on the most left line: ");
    for (int i = 0; i< n; i++)
    {
        printf("%d  ", arr[i][0]);
    }
    printf("\n");
    printf("the element on the most under line: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[n][i]);
    }
    printf("\n");
}

int main()
{
    int arr[105][105];
    int n;
    input(arr, &n);
}