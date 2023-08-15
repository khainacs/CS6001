#include<stdio.h>
int main(void){
    int a, b, max;
     max = a;
    printf("nhap vao a: %d\n", a);
    scanf("%d", &a);
    printf("nhap vao b: %d\n", b);
    scanf("%d", &b);
    if (b > max){
    	max = b;
    }
    else{
    	max = a;
    }
    printf("so lon nhat: %d", max);
    return 0;
}