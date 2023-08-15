#include<stdio.h>
int main()
{
    unsigned int  length, width, area, perimeter;
    printf("enter a length:\n");
    scanf("%u", &length);
    printf("enter a width:\n");
    scanf("%u", &width);
    area = length * width;
    perimeter = (length + width) * 2;
    printf("area of length %u and width %u is %u\n", length, width, area);
    printf("perimeter of length %u and width %u is %u\n",length, width, perimeter);
}
