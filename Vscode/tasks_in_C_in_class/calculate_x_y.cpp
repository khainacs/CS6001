#include<stdio.h>
int  main(void){
     //cau a
     int a;
     printf("nhap 1 so nguyen:");
     scanf("%d", &a);
     printf("\nSo nguyen da nhap la: %d", a);





     //cau b
     float b;
     printf("\nmoi nhap 1 so thuc:");
     scanf("%f", &b);
     printf("\nso thu da nhap la: %f", b);






     //cau c
     char z;
     printf("\nMoi nhap 1 ki tu:");
     scanf("%c", &z);
     printf("\nki tu da nhap la %c", z);







     //cau d
     int x, y, tong;
     printf("\nnhap hai so nguyen x:");
     scanf("%d", &x);
     printf("\nnhap hai so nguyen y:");
     scanf("%d", &y);
     tong = x + y;
     printf("\ntong hai so la: %d",tong );
return 0;


}