#include<stdio.h>
void check_hour_minute_second(int hour, int minute, int second)
{
    if (( hour >=1 && hour <= 24 ) && (minute >= 1 && minute <= 60) && (second >= 1 && second <= 60))
    {
        printf("%d : %d : %d is correct\n", hour, minute, second);
    }
    else 
    {
        printf("%d : %d : %d is incorrect\n", hour, minute, second);
    }
}


int main()
{
    int hour, minute, second;
    printf("enter hour : minute : second\n");
    scanf("%d  %d  %d", &hour, &minute, &second);
    check_hour_minute_second(hour, minute, second);
}