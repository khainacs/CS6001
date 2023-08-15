//consider 3 integer number a, b, c which posible form a triangle
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3 integer number a, b, c\n ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b > c) && (a+c > b) && (b+c > a))
    {
        if (a == b && a == c && b == c)
        {
            printf("a, b, c posible form a equilateral triangle\n");
        }
        else if ((a == b && c != a) || (a == c && b != c) || (b == c && c != a))
        {
            printf("a, b, c posible form a isosceles triangle\n");
        }
        else if ((c*c == a*a + b*b) || (b*b == a*a + c*c) || (b*b == a*a + c*c))
        {
            printf("a, b, c posible form a right triangle\n");
        }
        else
        {
            printf("a, b, c posible form a normal triangle\n");
        }
    }
    else
    {
        printf("a, b, c imposible form a triangle\n");
    }
}