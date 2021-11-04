#include<stdio.h>
#include<math.h>
int  main(void)
{
    unsigned int a, b, c, p, peri;
    float  s, area;
    printf("nhap canh a: \n");
    scanf("%d", &a);
    printf("nhap canh b: \n");
    scanf("%d", &b);
    printf("nhap canh c: \n");
    scanf("%d", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        peri = (a + b + c);
        p = peri / 2;
        s = p*(p - a)*(p - b)*(p - c);
        area = sqrt(s);
        printf("dien tich la: %f\n", area);
        printf("chu vi la: %d\n", peri);
    }else{
    	printf("day khong phai ba canh cua tam giac");
         }
}