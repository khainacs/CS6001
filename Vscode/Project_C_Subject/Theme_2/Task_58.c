// cosider 4 integer number a, b, c, d. how many different value?
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter 4 integer number a, b, c, d\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int count = 0;
    if (a != b)
    {
        count += 1;
    }
    else if (a != c)
    {
        count += 1;
    }
    else if (a != d)
    {
        count += 1;
    }
    if (b != c)
    {
        count += 1;
    }
    if (d != b)
    {
        count += 1;
    }
    if (c != d)
    {
        count += 1;
    }
    printf("in 4 integer number %d, %d, %d and %d have %d different value\n", a, b, c, d, count);
}