#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void input(int number, int arr[])
{
    for (int i = 0; i < number; i++)
    {
        printf("element th %d: ", i);
        scanf("%d", &arr[i]);
        while (i != 0 && arr[i] == arr[i-1])
        {
            printf("enter again, please\n");
            printf("element th %d: ", i);
            scanf("%d", &arr[i]);
        }
    }
}
void output(int number, int arr[])
{
    for (int i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/*
bool check_square(int element)
{
    int x = sqrt(element);
    return (x*x == element);
}
void square_number(int number, int arr[])
{
     for (int i = 0; i < number; i++)
     {
         if (check_square(arr[i]) == true)
         {
             printf("%d ", arr[i]);
         }
     }
     printf("\n");
}
int biggest_element(int number, int *arr)
{
    int var = 0;
    for (int i = 0; i < number; i++)
    {
        if (var < arr[i])
        {
            var = arr[i];
        }
    }
    return var;
}
*/
int unsigned_number(int number, int arr[])
{
    int var = 100032242;
    for (int i = 0; i < number; i++)
    {
        if (arr[i] > 0 & var > arr[i])
        {
            var = arr[i];
        }
    }
    return var;
}
int sub_number(int number, int arr[])
{
    int var = -190924232;
    for(int i = 0; i < number; i++)
    {
        if (arr[i] < 0 & arr[i] > var)
        {
            var = arr[i];
        }
    }
    if (var == -190924232 )
    {
        var = 0;
    }
    return var;
}
int sum_even_number(int number, int arr[])
{
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
void sort_increase(int number, int arr[])
{
    for (int i = 0; i < number - 1; i++)
    {
       for(int j = i + 1; j < number; j++)
       {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
       }
    }
}
int main ()
{
    int arr[100];
    int number;
    printf("enter the length of array: ");
    scanf("%d", &number);
    input(number, arr);
    /*
    printf("array was entered: ");
    output(number, arr);
    printf("square number that is in array, locate in odd index: ");
    square_number(number, arr);
    printf("The biggest element in array is ");
    printf("%d\n", biggest_element(number, arr));
    */
    printf("the biggest nagative number in array: %d \n", sub_number(number, arr));
    printf("the smallest positive number in arry is %d\n", unsigned_number(number, arr));
    printf("sum even number in array is %d\n", sum_even_number(number, arr));
    sort_increase(number, arr);
    output(number, arr);
    
}