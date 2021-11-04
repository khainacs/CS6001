#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    printf("enter three sides of a triangle:\n");
    scanf(" %d %d %d", &a, &b, &c);
    double p = (a + b + c) / 2.0;
    float area = sqrt(p*(p - a)*(p - b)*(p-c));
    float hA = 2*area / a;
    float hB = 2*area / b;
    float hC = 2*area / c;
   
    
    if ((a+b > c) && (a+c > b) && (b+c > a))
    {
        printf("area of a triangle is %f\n", area);
        printf("height a of a triangle is %f\n", hA);
        printf("height b of a triangle is %f\n", hB);
        printf("height c of a triangle is %f\n", hC);
    }
    else
    {
        printf("no exit this triangle:\n");
    
    }
    
}