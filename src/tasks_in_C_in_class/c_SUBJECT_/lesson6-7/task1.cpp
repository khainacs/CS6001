#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int a[10];
    int n, number;
    printf("enter the number of elements required from 1 to 10:\n");
    scanf("%d", &n);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        number = rand() % n;
        printf("a[%d] = %d\n", i, number);
    }
    
}