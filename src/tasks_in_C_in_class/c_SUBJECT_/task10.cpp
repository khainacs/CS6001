#include<stdio.h>
int main()
{
    char character;
    printf("enter a character:\n");
    scanf("%c", &character);
    if ((character>='A') && (character <= 'Z'))
    {
        printf("uppercase letters\n");
    }
    else if ((character >= 'a') && (character <= 'z'))
    {
        printf("lowercase letters\n");
    }
    else if (character % 2 == 0)
    {
        printf("even number \n");
    }
    else
    {
       printf("odd number\n");
    }
}