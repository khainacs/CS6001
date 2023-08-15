#include<stdio.h>
#include<cmath>
int main()
{
    int num;
    int i;
    int sum = 0;
    int count;
    do 
    {
        printf("enter num\n");
        scanf("%d", &num);
        if ((num < 0) || (num > 100))
        {
            printf("enter again");
        }

    }while((num < 0) || (num > 100));
   
     
    for ( i = 1; i <= num; i++)
    {
        if (i == 2)
        {
                printf("%d\t", i);
                count += 1;
        }
        else if ((i > 2) & (i % (int) (sqrt(i)) != 0))
        {
                printf("%d\t", i);
                count +=1;
                sum += i + 2;
        }   
    }
    printf("the sum is %d\n", sum);

    
}