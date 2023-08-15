#include<stdio.h>
int main()
{
    int a, b;
    printf("enter two unsigned number a and b:\n");
    scanf("%d %d", &a, &b);
    do 
    {
        if (a >= 0 && b >= 0)
        {
            if (a == 0 && b == 0)
            {
                printf("no exit greatest common divisor and least common multiple");
            }
    
            else if (a == 0 || b == 0)
            {
               printf("no exit least common multiple but greatest common divisor is %d", (a == 0) ? b : a);
            }
            else 
            {
                int bc = a *b;
               while (a != b)
               {
                   if (a > b)
                   {
                       a = a- b;
                   }
                   else
                   {
                       b = b -a;
                    }
               }
               printf("greatest common divisor is %d\n",a);
               printf("least common multiple is %d\n",b);
            }
        }
        else 
        {
        printf("enter again a, b > 0\n");
        scanf("%d %d", &a, &b);
        }
    }while(a, b <0);
}