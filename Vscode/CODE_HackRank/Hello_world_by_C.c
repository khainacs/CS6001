#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char input_string[105];
    scanf("%[^\n]%*c", input_string);
    printf("Hello, world.\n");
    printf("%s\n", input_string);
    return 0;
}