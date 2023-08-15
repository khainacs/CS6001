#include<stdio.h>
int main(void)
{
    float a, b, c, delta, x1, x2;


    printf("nhap 3 so a, b, c:\n");
    scanf("%f%f%f", &a, &b, &c);
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
             printf("phuong trinh vo nghiem");
       }
    }
    else if (a != 0)
    {
    	
        if (delta < 0)
        {
        	printf("phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
        	printf("phuong trinh co nghiem kep x1 = x2 =", -b/(2*a));
        }
        else if( delta > 0 )
        {
            x1 = ((-b + sqrt(delta)) / (2*a));
            x2 = ((- b - sqrt(delta)) / (2*a));
        	printf("phuong trinh co 2 nghiem phan biet %f va %f", x1, x2);
        }
    }

}