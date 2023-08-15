// Sort a, b, c, d in ordering ascending
#include <math.h>
#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("enter 4 integer number a, b, c, d\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a > b)
        {
            a = a + b;
            b = a - b;
             a= a - b;
        }
   if(a > c)
        {
            a = a + c;
            c = a - c;
            a = a - c;
        }
    if(a>d)
        {
            a = a + d;
            d = a - d;
            a = a - d;
        }
     if(b>c)
        {
            b = b + c;
            c = b - c;
            b = b - c;
        }
     if(b>d)
        {
            b = b + d;
            d = b - d;
            b = b - d;
        }
     if(c>d)
        {
            c = c + d;
            d = c - d;
            c = c - d;
        }
    printf("Sort a, b, c, d in ordering ascending is %d, %d, %d, %d\n", a, b, c, d);
    
}