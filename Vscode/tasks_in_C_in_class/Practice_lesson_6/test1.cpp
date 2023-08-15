#include<stdio.h>
#include<math.h>
typedef struct fraction
{
    int numerator;
    int denominator;
}PS;
int largest_common_divisor(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
        return a;
    }
}
PS reduce(PS &ps)
{
    int c = largest_common_divisor(ps.numerator, ps.denominator);
    ps.numerator = ps.numerator/c;
    ps.denominator = ps.denominator/c;
}
void input_fraction(PS ps)
{
    printf("enter numerator:\n");
    scanf("%d", &ps.numerator);
    do 
    {
        printf("enter denominator");
        scanf("%d", &ps.denominator);
    }while(ps.denominator == 0);
    reduce(ps);
}
void output_fraction(PS ps)
{
    printf("%d / %d", ps.numerator, ps.denominator);
}
PS addition_fraction (PS a, PS b)
{
    PS addition;
    addition.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
    addition.denominator = a.denominator + b.denominator;
    reduce(addition);
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
void intput_the_number_element(int &n)
{
    do 
    {
        printf("enter the number of elements:\n");
        scanf("%d", &n);
        if (n <= 0 || n >= 10)
        {
            printf("enter again please, required 0<n<10");
        }
    }while(n <= 0 || n >= 10);
}
void list_fraction(PS a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d", i);
        input_fraction(a[i]);
    }
}
void output_list_fraction(PS a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        output_fraction(a[i]);
    }
}
PS addition_list_fraction(PS a[], int n)
{
    PS s;
    s.numerator = 0;
    s.denominator = 1;
    for (int i = 0; i < n; i++)
    {
        s = addition_fraction(s, a[i]);
    }
    return s;
}
PS largest_fraction(PS a[], int n)
{
    PS max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (compare_fraction(a[i], max) > 0)
        {
            max = a[i];
        }
    }
    return max;
}

void comapre_list_array(PS a[], int n)
{
    PS temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (compare_fraction(a[i], a[j]) > 0)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    PS a[10];
    int n;
    intput_the_number_element(n);
    list_fraction(a, n);
    printf("list of array fraction is\n");
    output_list_fraction(a, n);
    PS result = addition_list_fraction(a, n);
    printf("addition of elements in array is %d / %d", result.numerator, result.denominator);
    PS largest = largest_fraction(a, n);
    printf("largest elements in array is %d / %d", largest.numerator, largest.denominator);
    printf("array sorted is");
    comapre_list_array(a, n);
    output_list_fraction(a, n);

}