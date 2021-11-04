#include<stdio.h>
#include<math.h>
bool check_three_side(float a, float b, float c)
{
    if ((a+b > c) && (a+c > b) && (b+c > a))
    {
        return true;
    }
    else
    {
       return false;
    }
}
void calculate_perimeter(float a, float b, float c)
{
    float perimeter;
    if (check_three_side(a, b, c) == true)
    {
        perimeter = a + b + c;
        printf("the perimeter of this triangle is %f\n", perimeter);
    }
    
}
void calculate_area(float a, float b, float c)
{
    float p, area;
    if (check_three_side(a, b, c) == true)
    {
        p = (a+b+c) / 2.0;
        area = sqrt(p*(p - a)*(p - b)*(p -c));
        printf("the area of this triangle is %f\n", area);
    }
   

}
int main()
{
    float a, b, c;
    printf("enter three sides of a triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    if (check_three_side(a, b, c) == true)
    {
        printf("this is 3 sides of a triangle\n");
    }   
    else 
    {
        printf("this is not 3 sides of a triangle\n");
    }
    calculate_perimeter(a, b, c);
    calculate_area(a, b, c);
}