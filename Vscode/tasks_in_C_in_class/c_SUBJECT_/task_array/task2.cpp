#include<stdio.h>
#define MAX 100
#include<math.h>
void input_element(int a[], int &n)
{
    do 
    {
        printf("enter number of elements:\n");
        scanf("%d", &n);
    }while(n <= 0 || n > 100);

    for (int i = 1; i <= n; i++)
    {
        printf("enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void output_elements_division_3(int a[], int n)
{
    printf("the number of elements division 3 equal 0:\n");
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 3 == 0)
        {
            printf("%5d\t", a[i]);
        }
    }
    printf("\n");
}

void  output_elements_less_0(int a[], int n)
{
    printf("the nnumbe of elements less 0:\n");
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
        {
            printf("%5d\t", a[i]);
        }
    }
    printf("\n");
}
void calculate_total(int a[], int n)
{
    
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum += a[i];
    }
    printf("calculate total of elements in array: %d", sum);
    printf("\n");
}
void calculate_average(int a[], int n)
{
    
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum += a[i];
    }
    float sum_average = sum / n;
    printf("calculate average total of elements in array: %f", sum_average);
    printf("\n");
}
void calculate_average_intger(int a[], float n)
{
    int average_integer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            average_integer += i;
        }
    }
    float average_integer_number = average_integer / n;
    printf("the average of integer number is:%f\n", average_integer_number);
    
}
int check_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = sqrt(n); i >= 2; i--)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void print_prime(int a[], int n)
{
    printf("the number of prime number in array is:\n");
    for (int i = 1; i <= n; i++)
    {
        if (check_prime(a[i]))
        {   
            printf("%d\t", a[i]);
        }
    }
    printf("\n");
}
void count_prime(int a[], int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check_prime(a[i]))
        {
            count += 1;
        }
    }
    printf("the number of prime in array: %d\n", count);
}
void total_prime(int a[], int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check_prime(a[i]))
        {
            total += a[i];
        }
    }
    printf("the total of prime number in array is %d\n", total);
}
void average_prime(int a[], float n)
{
    int total = 0;
    for(int i = 1; i <= n; i++)
    {
        if (check_prime(a[i]))
        {
            total += a[i];
        }
    }
    float average_prime = total / n;
    printf("the average of prime numberin array is: %f\n", average_prime);
}
void find_the_first_integer(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            printf("the element is the first unsigned number is: %d\n", a[i]);
            break;
        }
    }
}
void find_the_last_integer(int a[], int n)
{
    for (int i = n; i >= 1; i--)
    {
        if (a[i] > 0)
        {
            printf("the element is the last unsigned number is %d\n", a[i]);
            break;
        }
    }
}
void largest_element(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the largest element in array is %d\n", max);
}
void smallest_element(int a[], int n)
{
    int min = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("the smallest element in array is %d\n", min);
}
int main()
{
    int n;
    int  a[MAX];
    input_element(a, n);
    output_elements_division_3(a, n);
    output_elements_less_0(a, n);
    calculate_total(a, n);
    calculate_average(a, n);
    calculate_average_intger(a, n);
    print_prime(a, n);
    count_prime(a, n);
    total_prime(a, n);
    average_prime(a, n);
    find_the_first_integer(a, n);
    find_the_last_integer(a, n);
    largest_element(a, n);
    smallest_element(a, n);
}