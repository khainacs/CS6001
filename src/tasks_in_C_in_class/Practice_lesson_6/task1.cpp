#include<stdio.h>
#include<math.h>
struct fraction 
{
    int numerator;
    int denominator;
};
void input_fraction(fraction &ps)
{
    printf("enter numerator:\n");
    scanf("%d", &ps.numerator);
    do
    {
        printf("enter denominator:\n");
        scanf("%d", &ps.denominator);
        if (ps.denominator == 0)
        {
            printf("enter denominator must different 0\n");
        }
    }while(ps.denominator == 0);
}
void output_fraction(const fraction ps)
{
    printf("fraction: %d / %d\n", ps.numerator, ps.denominator);
}
int largest_common_divisor(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while(a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
void compact(fraction &ps)
{
    int c = largest_common_divisor(ps.numerator, ps.denominator);
    ps.numerator = ps.numerator / c;
    ps.denominator = ps.denominator / c;
    printf("fraction compacted: %d / %d\n", ps.numerator, ps.denominator);
    
}
fraction addition_fraction(fraction a, fraction b)
{
    fraction addition;
    addition. numerator = a.numerator*b.denominator +b.numerator*a.denominator;
    addition.denominator = a.denominator*b.denominator;
    compact(addition);
    return addition;
}
int compare_fraction(fraction ps1, fraction ps2)
{
    if ((float)ps1.numerator / ps1.denominator > (float)ps2.numerator / ps2.denominator)
    {
        return 1;
    }
    else if((float)ps1.numerator / ps1.denominator == (float)ps2.numerator / ps2.denominator)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    fraction x, y;
    printf("enter the first fraction:\n");
    input_fraction(x);
    output_fraction(x);
    compact(x);
    printf("enter the second fraction:\n");
    input_fraction(y);
    output_fraction(y);
    compact(y);
     if (compare_fraction(x,y) == 1)
    {
        printf(" x bigger y\n");
    }
    else if (compare_fraction(x,y) == 0)
    {
       printf("x equal y\n");
    }
    else
    {
        printf("x smaller y\n");
    }
    fraction addition = addition_fraction(x, y);
    printf("addtion of two fraction is:\n");
    output_fraction(addition);
   
    

}
