#include<stdio.h>
#include<math.h>
int main()
{    //caculate sum1 = 1 + 2 + ... + n
    int n, sum1;
    printf("enter n:");
    scanf("%d", &n);
    sum1 = (n*(n + 1)) / 2;
    printf("the sum is: %d\n", sum1);



   //S2 = - 1 +2 - 3 + 4 - ... + (-1)^n n.
    int dau = -1;
    int sum2 = 0;
    int item = 1;
    while (item <= n)
    {
         sum2 += item*dau;
         item += 1;
         dau = dau*(-1);

    }
    printf("sum2 is %d", sum2);


    //S3 = 1/2 + 2/3 + 3/4 ... + n/(n+1)
  
    float i = (1 / 2);
    float sum3;
    while (i < n)
    {
    	sum3 += i;
    	i += 1;
    	printf("sum3 is %f", sum3);
    }

    

    

}




