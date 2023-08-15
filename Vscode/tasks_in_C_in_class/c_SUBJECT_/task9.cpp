#include<stdio.h>
bool check_time(int time_to_work)
{
    if(time_to_work >= 6 && time_to_work <= 18)
    {
        return true;
    }
    return false; 
}
int salary(int time_to_work, int time_leave_to_work)
{
    int salary;
    if(time_leave_to_work <= 12)
    {
        salary = (time_leave_to_work - time_to_work)*6000;
    }
    else
    {
        if (time_to_work >= 12)
        {
            salary = (time_leave_to_work - time_to_work)*7500;
        }
    }
    return salary;
}
int main()
{
    int time_to_work, time_leave_to_work;
    printf("enter the time starts working\n");
    scanf("%d", &time_to_work);
    printf("enter the time ends working\n");
    scanf("%d", &time_leave_to_work);
    if (check_time(time_to_work)==false || (check_time(time_leave_to_work)==false))
    {
        printf("enter error");
    }
    else
    {
        printf("your salary : %d\n ", salary(time_to_work, time_leave_to_work));
    }

}