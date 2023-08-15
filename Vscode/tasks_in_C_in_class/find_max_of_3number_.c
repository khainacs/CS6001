#include<stdio.h>
int main(){
    float a, b, c, max;
     max = a;
    printf("nhap vao a: %d\n", a);
    scanf("%f", &a);
    printf("nhap vao b: %d\n", b);
    scanf("%f", &b);
    if (b > max){
    	max = b;
    }
    else if (c > max) {
    	max = c;
    }
    else {
        max = a;
    }
    printf("so lon nhat: %f", max);
    return max;
    
}