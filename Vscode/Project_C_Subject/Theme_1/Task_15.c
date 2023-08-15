// Calculate sum S = x + x^3 + x^5 +....+ x^(2*n + 1)
#include<stdio.h>
#include<math.h>
int main()
{
    int x, n;
    int sum = 0, multiple = 1;
    printf("enter x\n");
    scanf("%d", &x);
    printf("enter n\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        multiple = pow(x, (2*i + 1)) ;
        sum += multiple;
    }
    printf("The sum S = x + x^3 + x^5 +.....+ x^(2*n + 1) = %d\n", sum);
}