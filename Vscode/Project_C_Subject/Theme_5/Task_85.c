#include <stdio.h>
#include <string.h>
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
void delchar(char *x,int a, int b)
{
	if ((a+b-1) <= strlen(x))
	{
		strcpy(&x[b-1],&x[a+b-1]);
		puts(x);
	}
}

int main()
{
	char string[50];
	int n,pos,p;
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
	printf("Enter the position from where to delete");
	scanf("%d",&pos);
	printf("Enter the number of characters to be deleted");
	scanf("%d",&n);
	delchar(string, n,pos);

}
