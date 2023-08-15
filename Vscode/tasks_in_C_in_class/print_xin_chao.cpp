#include<stdio.h>
int main()
{   // cau a
    int n ;
    for (n = 1; n <= 10; n++)
    {
        printf("xin chao\n");
    }

    int i = 1;
    while (i <= 0)
    {
    
        printf("xin chao\n");
        i++;
    }

    i = 1;
    do
    {
        printf("xin chao\n");
        i++;
    }while(i <= 10);

    // cau b
    int k;
    printf("enter number of the lines you want:\n");
    scanf("%d", &k);
    for (k > 0; k--;)
    {
        printf("xin chao\n")
    }
    while (k > 0)
    {
        printf("xin chao\n");
        k--;
    }
    do 
    {
        printf("xin chao\n");
        k--;
    }while(k <= 0);


}