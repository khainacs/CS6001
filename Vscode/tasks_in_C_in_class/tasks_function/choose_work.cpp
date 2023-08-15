#include<stdio.h>

void list_menu()
{
    printf("\noption 1: solve simple equation\n");
    printf("option 2: check number perfect\n");
    printf("option 3: listed the number of perfect number\n");
    printf("option 4: find the greatest common divisor of two numbers\n");
    printf("option 0: end\n");
}

void solve_simple_equation(float a, float b)
{
    if ((a == 0) && (b == 0))
    {
        printf("equation has infinitely many solutions\n");
    }
    else if ((a == 0) && (b != 0))
    {
        printf("equation has no solution\n");
    }
    else if ((a != 0) && (b == 0))
    {
        printf("equation has x = 0\n");
    }
    else 
    {
        printf("equation has one solution is %f\n", -b/a);
    }
}
void check_perfect_number(int perfect_number)
{
    int total_number = 0;
    for (int i = 1; i < perfect_number; i++)
    {
        if (perfect_number % i == 0)
        {
               total_number += i;
        }
    }
    
    if (total_number - perfect_number == 0)
    {
        printf(" this number is a perfect number\n");
    }
    else
    {
        printf(" this is not a perfect number\n");
    }
}

void listed_perfect_number(int listed_number)
{
    
    for (int i = 1; i< listed_number; i++)
    {
        int total_number = 0;
        for (int j = 1; j < i; j++)
        {
           if (i % j == 0)
           {
                total_number += j;
           }
        }
        if (total_number == i)
        {
           printf("%d\t", i);
        }
    }
}

void  find_greatest_divisor(int m, int n)
{
    if ((m == 0) || (n == 0))
    {
        printf("greatest common divisor is %d", m+n);
    }
    while (m != n)
    {
        if (m > n)
        {
            m -= n;
        }
        else 
        {
            n -= m;
        }
    }
    printf("greatest common divisor is %d", m);
}


int main()
{
    int choose_work;
    do 
    {
       list_menu();
       printf("choose option:\n");
       scanf("%d", &choose_work);
       switch(choose_work)
        {
            case 1: float a, b;
                    printf("enter two float number a, b:\n");
                    scanf("%f %f", &a, &b);
                    solve_simple_equation(a, b);
                    break;

            case 2: int perfect_number;
                    printf("enter one integer number:\n");
                    scanf("%d", &perfect_number);
                    check_perfect_number( perfect_number);
                    break;

            case 3: int listed_number;
                    printf("enter one integer number:\n");
                    scanf("%d", &listed_number);
                    listed_perfect_number(listed_number);
                    break;
            
            case 4: int m, n;
                    printf("enter two unsigned number\n");
                    scanf("%d  %d", &m, &n);
                    find_greatest_divisor(m, n);
                    break;
            default: choose_work = 0;

        }
    }while(choose_work != 0);


}