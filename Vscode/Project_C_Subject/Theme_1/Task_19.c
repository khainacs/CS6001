// calculate S = 1 + x^2/2! + x^4/4!+...+ x^2n/(2n)!
#include<stdio.h>
float factorial (int n)
{
    int denominator = 1;
    if (n == 0)
    {
    	return 1;
    }
    for (int i = 0; i <= n; i++)
    {
           denominator *= i;
    }
    return denominator;
}
float power(int n, int x)
{
   int numerator = 1;
   for (int i = 0; i <= n; i++)
   {
       if (x != 0 && n == 0)
       {
           return 1.0;
       }
       else
       {
        numerator = numerator * x;
       }
   }
   return numerator;
}
int main()
{
    int n, x;
    float result = 0;
    do
    {
        printf("enter x\n");
        scanf("%d", &x);
        printf("enter n\n");
        scanf("%d", &n);
        if (x == 0 && n == 0)
        {
            printf("x and n can not equal 0 at the same time");
        }
    }while(x == 0 && n == 0);
    for (int i = 0; i <= n; i++)
    {
        
        result += power(x, 2*i) / factorial(2*i);
        
    }
    printf("The sum S = 1 + x^2/2! + x^4/4!+...+ x^2n/(2n)! = %f\n", result);
    
}