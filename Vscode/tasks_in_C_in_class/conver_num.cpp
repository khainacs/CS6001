#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr_binary[10], num, i, b;
    system ("cls");  
    printf("enter num:\n");
    scanf("%d", &num);
    printf("what radix system that you want 2 or 16:\n");
    scanf("%d", &b);
    if (b == 2)
    {
        for (i=0;num>0;i++)
        {
             arr_binary[i] = num % 2;
             num = num / 2;
        }
        printf("number convert to binary is\n");
    
        for (i-=1;i>=0;i--)
        {
            printf("%d ", arr_binary[i]);
        }
    }
    else if (b == 16)
    {
        char array_hexa[20];
        int remainder = 0;
        for(i=0;num>0;i++)
        {
            remainder = num % 16;
            if (remainder < 10)
            {
                remainder = remainder + 48;
            }
            else
            {
                remainder = remainder + 55;
            }
            array_hexa[i] = remainder;
            num = num / 16;
        }
        printf("number convert to hexa is\n ");
        for (i-=1;i>=0;i--)
        {
            printf("%c", array_hexa[i]);
        }
    }
    return 0;
}