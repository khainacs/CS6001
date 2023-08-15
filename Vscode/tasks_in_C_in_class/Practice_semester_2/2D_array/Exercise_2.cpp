#include<stdio.h>
#include<string.h>
struct birth 
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[30];
    char id[14];
    char sex;
    float point;
    birth date;
};
void info_student(student &list)
{
    gets(list.name);
    fflush(stdin);
    gets(list.id);
    gets(list.sex);
    scanf("%f", &list.point);
    scanf("%d", &list.date.day);
    scanf("%d", &list.date.month);
    scanf("%d", &list.date.year);
}
void input_student( student &list, int amount)
{
    scanf("%d", &amount);
    for (int i = 0; i < amount; i++)
    {
        info_student(list[i]);
    }
}
void output(student &list, int amount)
{
    for (int i = 0; i< amount; i++)
    {
        printf("%s", list[i].name);
        printf("%s", list[i].id);
        printf("%s", list[i].sex);
        printf("%f", list[i].point);
        printf("%d", list[i].date.day);
        printf("%d", list[i].date.month);
        printf("%d", list[i].date.year);
    }
}
int main()
{
    student list[100];
    int amount;
    input_student(list, amount);
    output(list, amount);
}