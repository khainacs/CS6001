 // The sum S = x + x^2 + x^3 +......+ x^n
 #include<stdio.h>
 int main()
 {
    int n, x;
    int sum = 0, multiple = 1;
    do 
    {
        printf("enter x\n");
        scanf("%d", &x);
        printf("enter n\n");z
        scanf("%d", &n);
        if (x == 0 && n == 0)
        {
            printf("x and n must not be equal 0 at the same time");
        }
    }while (x == 0 && n == 0);
    for (int i = 1; i <= n; i++)
    {
        multiple = x * multiple ;
        sum = sum + multiple;
    }
    printf("the sum S = x + x^2 + x^3+ .......+ x^n = %d\n", sum);
 }