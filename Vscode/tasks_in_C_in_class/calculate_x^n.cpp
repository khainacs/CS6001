#include<stdio.h>
double Power_n(float x, int n)
{
    float result = 1;
    while(n--)
    {
        result = result * x;
    }
    return result;
}
 
int main()
{
  float x, z;
  int n;
  printf("Nhập vào cơ số x: ");
  scanf("%f", &x);
  printf("Nhập vào số mũ n: ");
  scanf("%d", &n);
  z = Power_n(x, n);
  printf("%.1f^%d = %.1f",x,n, z);