#include<stdio.h>
float calculation_of_wages( float time)
{
    float salary;
    if (time < 12)
    {
        salary = time*5000;
    }
    else 
    {
        salary = (time - 12)*7500 + 5000*12;
    }
    return salary;
}




int main()
{
    float  time;
    printf("How many hours did  you work ?\n");
    scanf("%f", &time);
    printf("you worked about %f hours, so your salary is: %f\n", time,  calculation_of_wages(time));
    
}