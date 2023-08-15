#include<stdio.h>

float addition_two_number(float a, float b)
{
    float result = a + b;
    return result;
    
}
float subtraction_two_number(float a, float b)
{
    return a - b;
}
float multiplication_two_number(float a, float b)
{
    return a*b;
}
float division_two_number(float a, float b)
{
    return a / b;
}

int main(void)
{
    float a, b;
    char character;
    printf("enter two number:\n ");
    scanf(" %f %f", &a, &b);
    printf("enter one character:\n");
    
    scanf(" %c", &character);
    if (character == '+')
    {
        printf("total of 2 number: %f\n", addition_two_number(a, b));
    }
    else if(character == '-')
    {
        printf(" a subtract  b equal : %f\n", subtraction_two_number(a, b));

    }
    else if (character == '*')
    {
        printf("a multiple b equal: %f\n", multiplication_two_number(a, b));

    }
    else 
    {
        printf("a divise b equal: %f\n", division_two_number(a, b));

    }
}
