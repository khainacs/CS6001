#include<stdio.h>
#include<math.h>

void solution_equation(float a, float b, float c)
{
    float delta, x1, x2;
    delta = b*b - 4*a*c;
    if (a == 0)
    {
       if ((b == 0) && ( c == 0))
       {
       	    printf("phuong vo so nghiem\n");
       }
       else if ((b != 0) && (c == 0))
       {
       	    printf( "phuong trinh co nghiem bang 0\n");
       }
       else if (( b == 0) && (c != 0))
       {
             printf("phuong trinh vo nghiem\n");
       }
    }
    else if (a != 0)
    {
    	
        if (delta < 0)
        {
        	printf("phuong trinh vo nghiem\n");
        }
        else if (delta == 0)
        {
        	printf("phuong trinh co nghiem kep x1 = x2 = %f\n", -b/(2*a));
        }
        else if( delta > 0 )
        {
            x1 = ((-b + sqrt(delta)) / (2*a));
            x2 = ((- b - sqrt(delta)) / (2*a));
        	printf("phuong trinh co 2 nghiem phan biet %f va %f\n", x1, x2);
        }
    }

}
int main()
{
    float a, b, c;
    printf("enter three number:\n");
    scanf("%f %f %f", &a, &b, &c);
    solution_equation(a, b, c);
}