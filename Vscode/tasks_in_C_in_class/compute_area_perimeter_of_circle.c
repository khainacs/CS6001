#include<stdio.h>
#define pi 3.14
int  main(void){
     int r;
     float s, p;
     printf("nhap ban kinh: %d\n");
     scanf("%d", &r);
     s = pi * r * r;
     p = 2 * pi * r;
     printf("dien tich va chu vi lan luot la: %f %f", s, p);
     return 0
}