///solve system of quadratic equations
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, delta, x1, x2;


    printf("nhap 3 so a, b, c:\n");
    scanf("%f%f%f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (a == 0)
    {
       if ((b == 0) && ( c == 0))
       {
       	    printf("infinitely many solutions\n");
       }
       else if ((b != 0) && (c == 0))
       {
       	    printf( "the equation has  solution equal 0\n");
       }
       else if (( b == 0) && (c != 0))
       {
             printf("the equation has no solution");
       }
    }
    else if (a != 0)
    {
    	
        if (delta < 0)
        {
        	printf("the equation has no solution");
        }
        else if (delta == 0)
        {
        	printf("equation with double solution x1 = x2 = %f", -b/(2*a));
        }
        else if( delta > 0 )
        {
            x1 = ((-b + sqrt(delta)) / (2*a));
            x2 = ((- b - sqrt(delta)) / (2*a));
        	printf("The equation has 2 distinct solutions %f va %f", x1, x2);
        }
    }

}