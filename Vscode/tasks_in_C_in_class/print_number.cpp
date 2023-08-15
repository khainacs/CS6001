#include<stdio.h>
int main()
{
    int num;
do
{
    printf("enter number:");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("error condition, enter again:\n");
            
    }
}while(num<=0);
    
for (int i = 0; i< num; i++)
{
    printf("%d\t", i);
    
}
printf("\n");
}