#include<stdio.h>
int find_largest_number(int a, int b, int c)
{
    int max = a;
    if (b > max && b > c)
    {
        max = b;
    }
    else if (c > max && c > b)
    {
        max = c;
    }
    else 
    {
        max = a;
    }
    return max;
}
int main()
{
    int a, b, c;
    printf("enter 3 three number a, b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("the largest number in 3 number a, b and c is: %d\n",find_largest_number(a, b, c));
}