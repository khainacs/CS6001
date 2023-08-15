#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check_condition(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            return false;
        }
        else if (str[i] == ' ' && str[i + 1] == ' ')
        {
           return false;
        }
        else if (str[0] == ' ' && str[-1] == ' ')
        {
            
            return false;
        }
        else if (str[i] >= '!' && str[i] <= '@')
        {
            return false;
        }
    }
    return true;
    
}
int count_letter(char str[], int length)
{
    int letter = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            letter++;
        }
    }
    return letter;
}
void count_character(char str[], int length)
{
    int count = 0;
   for (int i = 0; i < length ; i++)
   {
       if (str[i] != ' ')
       {
           count += 1;
       }
       else if (str[i] == ' ')
        {
           printf("%d\t", count);
           count = 0;
        }
       
    }
    printf("%d\t", count);
}
int main()
{
    char str[50];
    do
    {
        printf("enter any string ");
        fgets(str, sizeof(str), stdin);
        if (check_condition(str) == true)
        {
            printf("string is  ");
            puts(str);    
        }
        else
        {
            printf("enter again sting just contain lowercase, leading and trailing space\n");
        }
    }while(check_condition(str) == false);
    int length = strlen(str) - 1; 
    str[length] = '\0';
    printf("the number of letter in  \"%s\" la %d\n", str, count_letter(str, length));
    printf("the number of characters of letters is \n");
    count_character(str, length);
    printf("\n");
    return 0;

}