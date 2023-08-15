#include<stdio.h>
int main()
{
    int arr[100] = {3, 6, 8, 5};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    printf("%d\n", sum);
    
    
}