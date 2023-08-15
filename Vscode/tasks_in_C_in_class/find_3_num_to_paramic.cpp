#include<stdio.h>
int main(void)
{
    unsigned int a, b, c;
    printf("nhap vao ba so nguyen a, b va c\n");
    scanf("%u%u%u", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
	    if ((a == b) && (b == c) && (c == a))
	    {
		    printf("day la tam giac can\n");
	    }
		else if (a == b == c)
		{
		    printf("day la tam giac deu\n");

		}
	    else if ((a*a) == (b*b) + (c*c) || (b*b) == (a*a) + (c*c) || (c*c) == (a*a + b*b))
		{
		    printf("day la tam giac vuong\n");
		}
    }
    else
    {
    	printf("khong ton tai");
    }
}