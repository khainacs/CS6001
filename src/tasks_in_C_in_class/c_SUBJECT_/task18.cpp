#include<stdio.h>

void solution_equation(float a, float b)
{
    if (a == 0)
    {
    if (b == 0)
    {
            printf("phuong trinh vo so nghiem\n");
    }
    else
    {
        printf("phuong trinh vo nghiem\n");
    }
    }
    else if (a != 0)
    {
        printf("phuong trinh co 1 nghiem duy nhat x= %f\n", -b/a);
    }

}

int main()
{
    float a, b;
    printf("hay nhap so a:\n");
    scanf("%f", &a);
    printf("hay nhap so b:\n");
    scanf("%f", &b);
    solution_equation(a, b);
}