#include<stdio.h>
#include<stdbool.h>
bool check_perfect_number(int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == a)
    {
        return true;
    }
    return false;
}
int count_perfect_number(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check_perfect_number(i) == true)
        {
            count += 1;
        }
    }
    return count;

}
int find_perfect_smaller(int n)
{
    for(int i = n; i >= 1; i--)
    {
        if (check_perfect_number(i) == true)
        {
            return i;
            break;
        }
    }
} 
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    printf("The number of perfect numbers from 1 to %d is %d\n", n, count_perfect_number(n));
    printf("The perfect number smaller %d is %d\n", n, find_perfect_smaller(n));
}