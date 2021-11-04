#include<stdio.h>
struct fraction
{
    int numerator;
    int denominator;
};
fraction addition_fraction(fraction a, fraction b)
{
    fraction addition;
    addition. numerator = a.numerator*b.denominator +b.numerator*a.denominator;
    addition.denominator = a.denominator*b.denominator;
    return addition;
}

int main()
{
    struct fraction ps[100];
    int n;
    printf("entre n:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter numerator of fraction %d\t", i+1);
        scanf("%d", &ps[i].numerator);
        printf("enter deminator  of fraction %d\t", i+1);
        scanf("%d", &ps[i].denominator);
    }
    for (int i = 0; i < n; i++)
    {
        printf("(%d / %d)\n", ps[i].numerator, ps[i].denominator);
    }
   
}